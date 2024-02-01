/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likong <likong@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 14:18:56 by likong            #+#    #+#             */
/*   Updated: 2024/01/25 14:18:59 by likong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	get_strs_length(int size, char **strs, char *sep)
{
	int	i;
	int	strs_length;

	i = 0;
	strs_length = 0;
	while (i < size)
	{
		if (strs[i] == NULL)
			return (-1);
		strs_length += ft_strlen(strs[i]);
		i++;
	}
	strs_length += (ft_strlen(sep) * (size - 1));
	return (strs_length);
}

void	str_copy(char *dest, char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		dest[i] = str[i];
		i++;
	}
}

char	*sep_join(char *target_str, char *sep)
{
	str_copy(target_str, sep);
	target_str += ft_strlen(sep);
	return (target_str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		str_length;
	char	*target_str;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	str_length = get_strs_length(size, strs, sep);
	target_str = (char *)malloc((str_length + 1) * sizeof(char));
	if (target_str == NULL)
		return (NULL);
	if (str_length == 0 || strs == NULL || sep == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		str_copy(target_str, strs[i]);
		target_str += ft_strlen(strs[i]);
		if (i != size - 1)
			target_str = sep_join(target_str, sep);
		i++;
	}
	*target_str = '\0';
	return (target_str - str_length);
}

int	main(int argc, char **argv)
{
	char *res;
	printf("The words are: ");
	for(int i = 1; i < argc - 1; i++)
		printf("%s ", argv[i]);
	printf("\n");
	
	printf("The separator: %s\n", argv[argc - 1]);
	res = ft_strjoin(argc - 2, argv + 1, argv[argc - 1]);

	if(!res)
		printf("Error\n");
	else
		printf("Returning: %s with %d\n", res, ft_strlen(res));
	free(res);
	return (0);
}