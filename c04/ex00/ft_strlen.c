/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likong <likong@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 09:09:21 by likong            #+#    #+#             */
/*   Updated: 2024/01/17 09:09:23 by likong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	str_length;

	str_length = 0;
	while (*str)
	{
		str++;
		str_length++;
	}
	return (str_length);
}

/*int	main(void)
{
	char *str = "abcde";

	printf("%d", ft_strlen(str));
}*/
