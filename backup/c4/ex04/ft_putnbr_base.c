/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likong <likong@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 09:57:46 by likong            #+#    #+#             */
/*   Updated: 2024/01/18 09:57:47 by likong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	tran_str_by_base(int nbr, char *base, int base_length)
{
	char	str[1000];
	int		i;
	long	test;

	i = 0;
	test = nbr;
	if (test < 0)
	{
		write(1, "-", 1);
		test = -test;
	}
	while (test / base_length != 0)
	{
		str[i] = base[test % base_length];
		i++;
		test = test / base_length;
	}
	str[i] = base[test % base_length];
	str[i + 1] = '\0';
	while (i >= 0)
	{
		write(1, &str[i], 1);
		i--;
	}
	write(1, "\n", 1);
}

int	check_base_value(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-' || base[i] < ' ' || base[i] > '~')
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[j] == base[i])
				return (0);
			j++;
		}
		i++;
	}
	if (i == 0 || i == 1)
		return (0);
	return (i);
}

void	write_result(char *result)
{
	int		i;
	char	*temp;

	i = 0;
	temp = result;
	while (*temp)
	{
		i++;
		temp++;
	}
	while (i > 0)
	{
		write(1, &result[i - 1], 1);
		i--;
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_length;

	base_length = check_base_value(base);
	if (base_length == 0)
		return ;
	tran_str_by_base(nbr, base, base_length);
}

/*int	main(void)
{
	ft_putnbr_base(42, "0123456789");
	ft_putnbr_base(-42, "0123456789");
	ft_putnbr_base(42, "01");
	ft_putnbr_base(42, "01234567");
	ft_putnbr_base(42, "0123456789ABCDEF");
	ft_putnbr_base(42, "poneyvif");
	ft_putnbr_base(42, "abdunmv123976");
	ft_putnbr_base(12, "5$");
	ft_putnbr_base(-2147483648, "0123456789");
	ft_putnbr_base(42, "poneyvii");
	ft_putnbr_base(42, "p");
	ft_putnbr_base(42, "");
	ft_putnbr_base(42, "p+oneyvii");
	ft_putnbr_base(-2147483648, "01");
	return (0);
}*/
