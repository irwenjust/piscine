/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix_function.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likong <likong@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 19:56:15 by likong            #+#    #+#             */
/*   Updated: 2024/01/31 19:56:33 by likong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../librarys/bsq.h"

int	**ft_initialization(t_map *map)
{
	unsigned int	i;
	int				**our_matrix;

	i = 0;
	our_matrix = ft_create_matrix(map->rows, map->columns);
	while (i < map->columns)
	{
		if (map->buffer[0][i] == map->obstacle)
			our_matrix[0][i] = 0;
		else
			our_matrix[0][i] = 1;
		i++;
	}
	i = 0;
	while (i < map->rows)
	{
		if (map->buffer[i][0] == map->obstacle)
			our_matrix[i][0] = 0;
		else
			our_matrix[i][0] = 1;
		i++;
	}
	return (our_matrix);
}

t_map	*ft_create_map(char *file)
{
	int		i;
	int		k;
	int		aux;
	t_map	*map;

	i = -1;
	k = 0;
	aux = ft_strlen_delimiter(file, '\n');
	map = (t_map *)malloc(sizeof(t_map));
	ft_assert(map != NULL, "ft_store(): malloc()");
	map->rows = ft_natoi(file, aux - 3);
	map->columns = ft_strlen_delimiter(file + aux + 1, '\n');
	map->empty = file[aux - 3];
	map->obstacle = file[aux - 2];
	map->full = file[aux - 1];
	map->buffer = ft_create_str_array(map->rows, map->columns);
	while (file[++i + aux])
	{
		if (file[i + aux] != '\n')
		{
			map->buffer[k / map->columns][k % map->columns] = file[i + aux];
			k++;
		}
	}
	return (map);
}

int	**ft_create_matrix(int n1, int n2)
{
	int	i;
	int	**array;

	i = 0;
	array = (int **)malloc(n1 * sizeof(int *));
	ft_assert(array != NULL, "Allocation failed on ft_create_matrix()\n");
	while (i < n1)
	{
		array[i++] = ft_create_array(n2);
	}
	return (array);
}

void	ft_delete_matrix(int **matrix, unsigned int n1)
{
	unsigned int	i;

	i = 0;
	while (i < n1)
		free(matrix[i++]);
	free(matrix);
}
