/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 13:17:26 by hitran            #+#    #+#             */
/*   Updated: 2024/01/21 13:17:47 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_valid(int **grid, int row, int col, int num)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (grid[row][i] == num || grid[i][col] == num)
			return (0);
		i++;
	}
	return (1);
}

int	check_visibility(int **grid, int *clues);

int	solve(int **grid, int row, int col, int *clues)
{
	int	num;

	num = 1;
	if (row == 4)
		return (check_visibility(grid, clues));
	if (col == 4)
		return (solve(grid, row + 1, 0, clues));
	while (num <= 4)
	{
		if (is_valid(grid, row, col, num))
		{
			grid[row][col] = num;
			if (solve(grid, row, col + 1, clues))
				return (1);
			grid[row][col] = 0;
		}
		num++;
	}
	return (0);
}
