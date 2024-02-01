/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likong <likong@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 08:44:09 by likong            #+#    #+#             */
/*   Updated: 2024/01/24 08:44:10 by likong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <unistd.h>

int	g_solutions = 0;

void	putchar1(int arr[10])
{
	int		i;
	char	num;

	i = 0;
	while (i < 10)
	{
		num = arr[i] + '0';
		write(1, &num, 1);
		i++;
	}
	write(1, "\n", 1);
}

int	abs(int num)
{
	if (num < 0)
		return (-num);
	return (num);
}

int	check_valid(int arr[10], int row)
{
	int	i;

	i = 0;
	while (i < row)
	{
		if (arr[i] == arr[row] || abs(arr[i] - arr[row]) == abs(i - row))
			return (0);
		i++;
	}
	return (1);
}

int	recursion_queens(int arr[10], int row, int col)
{
	int	i;

	i = 0;
	if (row == col)
	{
		putchar1(arr);
		g_solutions++;
		return (1);
	}
	while (i < col)
	{
		arr[row] = i;
		if (check_valid(arr, row))
		{
			recursion_queens(arr, row + 1, col);
		}
		i++;
	}
	return (g_solutions);
}

int	ft_ten_queens_puzzle(void)
{
	int	col;
	int	row;
	int	arr[10];

	col = 10;
	row = 0;
	return (recursion_queens(arr, row, col));
}

/*int	main(void)
{
	printf("The total number is: %d", ft_ten_queens_puzzle());
	return (0);
}*/
