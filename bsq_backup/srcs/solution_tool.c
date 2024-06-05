/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solution_tool.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likong <likong@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 19:57:25 by likong            #+#    #+#             */
/*   Updated: 2024/01/31 19:57:29 by likong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../librarys/bsq.h"

int	ft_minimum_2(int n1, int n2)
{
	if (n1 < n2)
		return (n1);
	return (n2);
}

int	ft_minimum_3(int n1, int n2, int n3)
{
	return (ft_minimum_2(n1, ft_minimum_2(n2, n3)));
}

void	ft_mark_full(t_map *map, int coordinate[], int max_length)
{
	int	x;
	int	y;

	y = coordinate[1];
	while (y < coordinate[1] + max_length)
	{
		x = coordinate[0];
		while (x < coordinate[0] + max_length)
		{
			map->buffer[y][x] = map->full;
			x++;
		}
		y++;
	}
}
