/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likong <likong@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 11:56:05 by likong            #+#    #+#             */
/*   Updated: 2024/01/25 11:56:06 by likong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*create_arr(int min, int max)
{
	int	*arr;

	arr = (int *)malloc((max - min) * sizeof(int));
	if (arr == NULL)
		return (NULL);
	return (arr);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*arr;

	if (min - max >= 0
		|| max - min > 90000000
		|| (long)min - (long)max > 90000000)
	{
		range = NULL;
		return (0);
	}
	arr = create_arr(min, max);
	i = 0;
	while (i < (max - min))
	{
		arr[i] = min + i;
		i++;
	}
	*range = arr;
	if (*range == NULL)
		return (-1);
	return (i);
}

int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Amount of number is incorrect\n");
		return (1);
	}

	int i;
	int min;
	int max;
	int *p;
	int **range;
	int arr_length;

	range = &p;
	min = atoi(argv[1]);
	max = atoi(argv[2]);
	arr_length = ft_ultimate_range(range, min, max);
	printf("array length: %d\n", arr_length);
	i = 0;
	while (i < (max - min))
	{
		printf("%d ", range[0][i]);
		i++;
	}
	return (0);
}
