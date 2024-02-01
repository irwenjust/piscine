/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likong <likong@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 13:10:46 by likong            #+#    #+#             */
/*   Updated: 2024/01/12 13:16:45 by likong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
#include <unistd.h>

void	ft_print_comb(void)
{
	char	number[4];

	number[0] = '0';
	number[3] = '\0';
	while (number[0] <= '7')
	{
		number[1] = number[0] + 1;
		while (number[1] <= '8')
		{
			number[2] = number[1] + 1;
			while (number[2] <= '9')
			{
				write(1, number, 4);
				if (number[0] != '7' || number[1] != '8' || number[2] != '9')
				{
					write(1, ",", 1);
					write(1, " ", 1);
				}
				number[2]++;
			}
			number[1]++;
		}
		number[0]++;
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
