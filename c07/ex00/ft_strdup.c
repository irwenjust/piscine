/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likong <likong@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 08:18:29 by likong            #+#    #+#             */
/*   Updated: 2024/01/25 08:18:32 by likong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	src_length(char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*temp;

	i = 0;
	temp = (char *)malloc(src_length(src) * sizeof(char));
	if (!temp)
		return (0);
	else
	{
		while (src[i] != '\0')
		{
			temp[i] = src[i];
			i++;
		}
	}
	temp[i] = '\0';
	return (temp);
}

/*int	main(void)
{
	char *str;

	str = ft_strdup("abcde");
	printf("%s", str);
	free(str);
	return (0);
}*/
