/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_visibility.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 13:16:51 by hitran            #+#    #+#             */
/*   Updated: 2024/01/21 13:17:08 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_left(int **grid, int r)
{
	int	max_height;
	int	visible_count;
	int	c;

	max_height = 0;
	visible_count = 0;
	c = 0;
	while (c < 4)
	{
		if (grid[r][c] > max_height)
		{
			max_height = grid[r][c];
			visible_count++;
		}
		c++;
	}
	return (visible_count);
}

int	check_right(int **grid, int r)
{
	int	max_height;
	int	visible_count;
	int	c;

	max_height = 0;
	visible_count = 0;
	c = 4 - 1;
	while (c >= 0)
	{
		if (grid[r][c] > max_height)
		{
			max_height = grid[r][c];
			visible_count++;
		}
		c--;
	}
	return (visible_count);
}

int	check_up(int **grid, int c)
{
	int	max_height;
	int	visible_count;
	int	r;

	max_height = 0;
	visible_count = 0;
	r = 0;
	while (r < 4)
	{
		if (grid[r][c] > max_height)
		{
			max_height = grid[r][c];
			visible_count++;
		}
		r++;
	}
	return (visible_count);
}

int	check_down(int **grid, int c)
{
	int	max_height;
	int	visible_count;
	int	r;

	max_height = 0;
	visible_count = 0;
	r = 4 - 1;
	while (r >= 0)
	{
		if (grid[r][c] > max_height)
		{
			max_height = grid[r][c];
			visible_count++;
		}
		r--;
	}
	return (visible_count);
}

int	check_visibility(int **grid, int *clues)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (check_left(grid, i) != clues[i])
			return (0);
		if (check_right(grid, i) != clues[4 + i])
			return (0);
		if (check_up(grid, i) != clues[8 + i])
			return (0);
		if (check_down(grid, i) != clues[12 + i])
			return (0);
		i++;
	}
	return (1);
}
