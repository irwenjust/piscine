/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likong <likong@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 18:24:16 by likong            #+#    #+#             */
/*   Updated: 2024/01/14 18:24:18 by likong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	src_length;

	src_length = 0;
	while (src[src_length] && src_length < n)
	{
		dest[src_length] = src[src_length];
		src_length++;
	}
	while (src_length < n)
	{
		dest[src_length] = '\0';
		src_length++;
	}
	return (dest);
}

/*int	main(void)
{
	char	dest[100];
	char	*src;
    unsigned    int n;

	src = "abcde";
    n = 4;
    for(unsigned int i = 0; i <= n; i++)
    {
        printf("%c", ft_strncpy(dest, src, n)[i]);
        if (ft_strncpy(dest, src, n)[i] == '\0')
        {
            printf(" go ");
        }
    }
}*/
