/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likong <likong@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:01:38 by likong            #+#    #+#             */
/*   Updated: 2024/01/13 10:15:53 by likong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	change_and_output(char *num)
{
	char	temp;
	int		length;
	int		j;

	length = 0;
	while (num[length] != '\0')
	{
		length++;
	}
	j = 0;
	while (j < length / 2)
	{
		temp = num[j];
		num[j] = num[length - j - 1];
		num[length - j - 1] = temp;
		j++;
	}
	write(1, num, 12);
}

char	number_not_zero(int nb, int i, char *num)
{
	while (nb != 0)
	{
		num[i] = nb % 10 + '0';
		i++;
		nb = nb / 10;
	}
	num[i + 1] = '\0';
	return (*num);
}

void	ft_putnbr(int nb)
{
	int		i;
	char	num[12];
	char	minus;	

	i = 0;
	minus = '-';
	if (nb == 0)
	{
		num[0] = '0';
	}
	else if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (nb < 0)
	{
		write(1, &minus, 1);
		nb = -nb;
		*num = number_not_zero(nb, i, num);
	}
	else
	{
		*num = number_not_zero(nb, i, num);
	}
	change_and_output(num);
}

int	main(void)
{
	int	nb;

	nb = -2147483648;
	ft_putnbr(nb);
	return (0);
}
