/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likong <likong@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 18:27:43 by likong            #+#    #+#             */
/*   Updated: 2024/01/16 18:27:45 by likong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*temp;
	unsigned int	str_length;

	temp = dest;
	str_length = 0;
	while (*temp)
	{
		temp++;
	}
	while (*src)
	{
		if (str_length >= nb)
		{
			break ;
		}
		*temp++ = *src++;
		str_length++;
	}
	*temp = '\0';
	return (dest);
}

/*int main(void)
{
	unsigned int	nb = 1;
	char	dest[100] = "abc";
	char	src[] = "faf";
	char	*test;
	test = ft_strncat(dest, src, nb);
	printf("%s", dest);
	return (0);
}*/
