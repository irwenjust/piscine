/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq_solution.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likong <likong@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 19:55:53 by likong            #+#    #+#             */
/*   Updated: 2024/01/31 19:55:58 by likong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../librarys/bsq.h"

void	ft_detect_obstacle(t_map *map, int **mat)
{
	unsigned int	y;
	unsigned int	x;
	unsigned int	i;
	unsigned int	j;

	y = 0;
	while (++y < map->rows)
	{
		x = 0;
		while (++x < map->columns)
		{
			if (map->buffer[y][x] == map->obstacle)
				mat[y][x] = 0;
			else
			{
				i = x - 1;
				j = y - 1;
				mat[y][x] = ft_minimum_3(mat[y][i], mat[j][x], mat[j][i]) + 1;
			}
		}
	}
}

void	ft_update_result(t_map *map, int **mat, int *max, int coordinate[])
{
	unsigned int	y;
	unsigned int	x;

	y = 0;
	while (++y < map->rows)
	{
		x = 0;
		while (++x < map->columns)
		{
			if (mat[y][x] > *max)
			{
				*max = mat[y][x];
				coordinate[0] = x - *max + 1;
				coordinate[1] = y - *max + 1;
			}
		}
	}
}

void	ft_mid_obstacle(t_map *map, int *coord, unsigned int y, unsigned int f)
{
	unsigned int	x;

	while (y < map->rows)
	{
		f = 0;
		x = 0;
		while (x < map->columns && map->buffer[y][x] == map->obstacle)
			x++;
		if (x < map->columns)
		{
			coord[0] = x;
			coord[1] = y;
			break ;
		}
		y++;
	}
}

int	ft_solution(t_map *map, int **mat, int coordinate[])
{
	unsigned int	y;
	unsigned int	first_empty_column;
	int				max_length;

	y = 0;
	max_length = 0;
	first_empty_column = 0;
	ft_detect_obstacle(map, mat);
	ft_update_result(map, mat, &max_length, coordinate);
	if (max_length == 1)
	{
		ft_mid_obstacle(map, coordinate, y, first_empty_column);
	}
	return (max_length);
}

void	ft_bsq(t_map *map)
{
	int	**our_matrix;
	int	coordinate[2];
	int	max_length;

	our_matrix = ft_initialization(map);
	max_length = ft_solution(map, our_matrix, coordinate);
	ft_mark_full(map, coordinate, max_length);
	ft_print_str_array(map->buffer, map->rows, map->columns);
	ft_delete_matrix(our_matrix, map->rows);
}
