/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likong <likong@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 13:25:26 by likong            #+#    #+#             */
/*   Updated: 2024/01/12 09:37:36 by likong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	int_to_string(int num, char	*str)
{
	if (num < 10)
	{
		str[0] = '0';
		str[1] = '0' + num;
	}
	else
	{
		str[0] = num / 10 + '0';
		str[1] = num % 10 + '0';
	}
}

void	print_sign(int i)
{
	if (i != 98)
	{
		write(1, ",", 1);
		write(1, " ", 1);
	}
}

void	ft_print_comb2(void)
{
	char	str[6];
	int		i;
	int		j;

	str[2] = ' ';
	str[5] = '\0';
	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			int_to_string(i, str);
			int_to_string(j, str + 3);
			write(1, &str, 5);
			print_sign(i);
			j++;
		}
		i++;
	}
}

/*int	main(void)
{
	ft_print_comb2();
	return (0);
}*/
