/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_function.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likong <likong@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 19:57:38 by likong            #+#    #+#             */
/*   Updated: 2024/01/31 19:57:40 by likong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../librarys/bsq.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

//check str length until encounters a delimiter or the end of the str;
int	ft_strlen_delimiter(char *str, char delimiter)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && str[i] != delimiter)
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = ft_strlen(dest);
	j = 0;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

char	*ft_new_str(int n)
{
	char	*str;

	str = (char *)malloc(n * sizeof(char));
	ft_assert(str != NULL, "Allocation failed on ft_new_str()\n");
	return (str);
}
