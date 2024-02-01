/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_clues.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 10:21:06 by hitran            #+#    #+#             */
/*   Updated: 2024/01/21 16:57:24 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	res;

	res = 0;
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + (*str - '0');
		str++;
	}
	return (res);
}

int	parse_clues(const char *str, int *clues)
{
	int		i;
	int		clue_index;
	char	num_buffer[10];
	int		num_buffer_index;

	i = 0;
	clue_index = 0;
	while (str[i] != '\0' && clue_index < 16)
	{
		num_buffer_index = 0;
		while (str[i] == ' ' && str[i] != '\0')
			i++;
		while (str[i] != ' ' && str[i] != '\0')
			num_buffer[num_buffer_index++] = str[i++];
		num_buffer[num_buffer_index] = '\0';
		if (num_buffer_index > 0)
			clues[clue_index++] = ft_atoi(num_buffer);
	}
	return (clue_index);
}
