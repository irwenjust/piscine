/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likong <likong@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 14:09:32 by likong            #+#    #+#             */
/*   Updated: 2024/01/15 14:09:34 by likong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	get_src_length(char *str)
{
	char	*temp;
	int		i;

	i = 0;
	temp = str;
	while (*temp)
	{
		i++;
		temp++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int n)
{
	int		i;

	i = 0;
	if (n == 0)
		return (get_src_length(src));
	while (src[i] != '\0' && i < n - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (get_src_length(src));
}
/*
int	main(void)
{
	char	dest[100];
	char	dest1[100];
	char	dest2[100];
	char	dest3[100];
	char	dest4[100];
    unsigned    int n;

    n = 2;
	printf("%u, dest: %s\n", ft_strlcpy(dest, "abcde", n), dest);
	printf("%lu, dest: %s\n", strlcpy(dest, "abcde", 2), dest);

	printf("%u, dest: %s\n", ft_strlcpy(dest1, "ab", n), dest1);
	printf("%lu, dest: %s\n", strlcpy(dest1, "ab", 2), dest1);

	printf("%u, dest: %s\n", ft_strlcpy(dest2, "", n), dest2);
	printf("%lu, dest: %s\n", strlcpy(dest2, "", 2), dest2);

	printf("%u, dest: %s\n", ft_strlcpy(dest3, "abc", 0), dest3);
	printf("%lu, dest: %s\n", strlcpy(dest3, "abc", 0), dest3);

	printf("%u, dest: %s\n", ft_strlcpy(dest4, "abc", 10), dest4);
	printf("%lu, dest: %s\n", strlcpy(dest4, "abc", 10), dest4);
}
*/