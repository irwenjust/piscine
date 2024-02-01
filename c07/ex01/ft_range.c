/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likong <likong@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 08:43:57 by likong            #+#    #+#             */
/*   Updated: 2024/01/25 08:44:00 by likong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*arr;

	if (min - max >= 0
		|| max - min > 90000000
		|| (long)min - (long)max > 90000000)
		return (NULL);
	arr = (int *)malloc((max - min) * sizeof(int));
	if (arr == NULL)
		return (NULL);
	i = 0;
	while (i < (max - min))
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}

int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Amount of number is incorrect\n");
		return (1);
	}

	int i;
	int amount;
	int min;
	int max;
	//int *arr;

	min = atoi(argv[1]);
	max = atoi(argv[2]);
	/*arr = ft_range(min, max);
	if (!arr)
	{
		printf("error\n");
		return (1);
	}
	i = 0;
	amount = max - min;
	while (i < amount)
	{
		printf("%d ", arr[i]);
		i++;
	}
	free(arr);
	return (0);*/


	amount = max - min;
	i = 0;
	while (i < amount)
	{
		printf("%d ", ft_range(min, max)[i++]);
	}




}
