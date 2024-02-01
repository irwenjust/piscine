/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likong <likong@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 17:26:13 by likong            #+#    #+#             */
/*   Updated: 2024/01/16 17:26:16 by likong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char	*temp;

	temp = dest;
	while (*temp)
	{
		temp++;
	}
	while (*src)
	{
		*temp++ = *src++;
	}
	*temp = '\0';
	return (dest);
}

/*int main(void)
{
	char	dest[4] = "abc";
	char	src[] = "fafdfaaf";
	char	*test;
	test = ft_strcat(dest, src);
	printf("%s", test);
	return (0);
}*/
