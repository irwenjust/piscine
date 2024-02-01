/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likong <likong@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 20:02:24 by likong            #+#    #+#             */
/*   Updated: 2024/01/17 20:02:26 by likong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	count_length(char *target)
{
	unsigned int	num;
	char			*temp;

	num = 0;
	temp = target;
	while (*temp)
	{
		temp++;
		num++;
	}
	return (num);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_length;
	unsigned int	src_length;
	unsigned int	cat_length;

	dest_length = count_length(dest);
	src_length = count_length(src);
	if (dest_length >= size || size == 0)
		return (size + src_length);
	cat_length = dest_length;
	while (cat_length < (size - 1) && *src)
	{
		dest[cat_length] = *src;
		src++;
		cat_length++;
	}
	dest[cat_length] = '\0';
	return (dest_length + src_length);
}

/*int main()
{
    char dest[100] = "Hello";
    char src[] = "world";
    unsigned int    size = 4;

    printf("when size is %u, string length: %u. dest: %s\n", 
	size, ft_strlcat(dest, src, size), dest);

	char dest1[100] = "Hello";
    char src1[] = "world";
    unsigned int    size1 = 5;

    printf("when size1 is %u, string length: %u. dest1: %s\n", 
	size1, ft_strlcat(dest1, src1, size1), dest1);

	char dest2[100] = "Hello";
    char src2[] = "world";
    unsigned int    size2 = 6;

    printf("when size2 is %u, string length: %u. dest2: %s\n", 
	size2, ft_strlcat(dest2, src2, size2), dest2);

	char dest3[100] = "Hello";
    char src3[] = "world";
    unsigned int    size3 = 7;

    printf("when size3 is %u, string length: %u. dest3: %s\n", 
	size3, ft_strlcat(dest3, src3, size3), dest3);

	char dest4[100] = "Hello";
    char src4[] = "world";
    unsigned int    size4 = 11;

    printf("when size4 is %u, string length: %u. dest4: %s\n", 
	size4, ft_strlcat(dest4, src4, size4), dest4);

	char dest5[100] = "Hello";
    char src5[] = "world";
    unsigned int    size5 = 13;

    printf("when size5 is %u, string length: %u. dest5: %s\n", 
	size5, ft_strlcat(dest5, src5, size5), dest5);

	return (0);
}*/
