/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 13:25:51 by hitran            #+#    #+#             */
/*   Updated: 2024/01/21 16:58:13 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		parse_clues(const char *str, int *clues);
int		solve(int **grid, int row, int col, int *clues);
void	print_grid(int **grid);

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	**create_grid(int **grid)
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		grid[i] = (int *)malloc(4 * sizeof(int));
		j = 0;
		while (j < 4)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
	return (grid);
}

void	free_grid(int **grid)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}

int	main(int argc, char **argv)
{
	int	clues[16];
	int	**grid;
	int	i;

	i = 0;
	grid = (int **)malloc(4 * sizeof(int *));
	create_grid(grid);
	if (argc != 2)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	if (parse_clues(argv[1], clues) != 16)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	if (solve(grid, 0, 0, clues))
		print_grid(grid);
	else
		write(1, "Error\n", 6);
	free_grid(grid);
	return (0);
}
