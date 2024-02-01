/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likong <likong@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 20:21:59 by likong            #+#    #+#             */
/*   Updated: 2024/01/16 20:22:02 by likong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int main(void)
{
    char	dest[100] = "abc";
	char	src[] = "fafdfaaf";
	unsigned int	size = 10;
	int	test;
	test = strlcat(dest, src, size);
	printf("%s\n", dest);
    printf("%d\n", test);
	return (0);
}
