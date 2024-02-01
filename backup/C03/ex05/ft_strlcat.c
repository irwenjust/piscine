/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likong <likong@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 19:09:48 by likong            #+#    #+#             */
/*   Updated: 2024/01/16 19:09:50 by likong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	return_size(unsigned int src_size,
				unsigned int dest_size,
				unsigned int size)
{
	if (dest_size < size)
	{
		return (src_size + dest_size);
	}
	else
	{
		return (src_size + size);
	}
}

void	catch_string(char *temp, char *src, int cat_size)
{
	int	i;

	i = 0;
	while (i < cat_size)
	{
		*temp++ = *src++;
		i++;
	}
	*temp = '\0';
}

int	count_src_size(char *temp_src)
{
	int	src_size;

	src_size = 0;
	while (*temp_src)
	{
		temp_src++;
		src_size++;
	}
	return (src_size);
}

int	which_size_smaller(int i, int j)
{
	if (i < j)
		return (i);
	else
		return (j);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	char			*temp_dest;
	char			*temp_src;
	unsigned int	src_size;
	unsigned int	dest_size;

	temp_dest = dest;
	temp_src = src;
	src_size = 0;
	dest_size = 0;
	while (*temp_dest)
	{
		dest_size++;
		temp_dest++;
	}
	src_size = count_src_size(temp_src);
	if (size <= dest_size + 1)
	{
		return (return_size(src_size, dest_size, size));
	}
	catch_string(temp_dest, src,
		which_size_smaller(size - dest_size - 1, src_size));
	return (return_size(src_size, dest_size, size));
}

int main(void)
{
	char	dest[100] = "hello ";
	char	src[] = "world";
	unsigned int	size = 1000;
	unsigned int	test;
	//test = ft_strlcat(dest, src, size);
	printf("%u\n", ft_strlcat(dest, src, size));
	printf("%s\n", dest);

	char	dest1[100] = "hello ";
	char	src1[] = "world";
	unsigned int	size1 = 1000;
	//test = ft_strlcat(dest, src, size);
	printf("%lu\n", strlcat(dest1, src1, size1));
	printf("%s\n", dest1);
	return (0);
}
