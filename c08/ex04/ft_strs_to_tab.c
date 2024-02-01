/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likong <likong@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 09:57:01 by likong            #+#    #+#             */
/*   Updated: 2024/01/30 09:57:03 by likong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"
#include <stdio.h>

int	str_length(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*str_dup(char *str)
{
	int		i;
	char	*temp;

	temp = (char *)malloc((str_length(str) + 1) * sizeof(char));
	if (!temp)
		return (NULL);
	i = 0;
	while (str[i])
	{
		temp[i] = str[i];
		i++;
	}
	temp[i] = '\0';
	return (temp);
}

t_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*arr;

	arr = (t_stock_str *)malloc((ac + 1) * sizeof(t_stock_str));
	if (!arr)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		if (av[i] == NULL)
			return (NULL);
		arr[i].size = str_length(av[i]);
		arr[i].str = av[i];
		arr[i].copy = str_dup(av[i]);
		if (arr[i].str == NULL || arr[i].copy == NULL)
			return (NULL);
		i++;
	}
	arr[i].str = NULL;
	return (arr);
}

/*int	main(int argc, char **argv)
{
	int			i;
	t_stock_str	*array;

	array = ft_strs_to_tab(argc - 1, argv + 1);
	i = 0;
	while (i < argc - 1)
	{
		printf("%d size: %d\n", i, array[i].size);
		printf("%d str: %s\n", i, array[i].str);
		printf("%d copy: %s\n\n", i, array[i].copy);
		i++;
	}
	i = 0;
	while (i < argc - 1)
	{
		free(array[i].str);
		free(array[i].copy);
	}
	free(array);
	return (0);
}*/
