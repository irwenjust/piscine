/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likong <likong@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 16:22:17 by likong            #+#    #+#             */
/*   Updated: 2024/01/18 19:24:14 by likong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	str_length;

	str_length = 1;
	if (n == 0)
		return (0);
	while (str_length < n && *s1 == *s2 && *s1)
	{
		str_length++;
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int	main(void)
{
	char *s1 = "z";
	char *s2 = "";


	char *s3 = "z";
	char *s4 = "";
	int i = ft_strncmp(s1, s2, 1);
	printf("%d\n", i);
	printf("%d", strncmp(s3, s4, 1));
	return (0);
}
