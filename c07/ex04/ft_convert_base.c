/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likong <likong@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 11:18:10 by likong            #+#    #+#             */
/*   Updated: 2024/01/29 11:18:11 by likong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

char	*go_next(int nbr, char *base_to);
void	tran_str_by_base(int nbr, char *base, int base_length, char *str);

int	check_base_value(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-' || base[i] <= ' ' || base[i] > '~')
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

int	white_and_minus(char *str, int *ptr_i)
{
	int	signal_amount;
	int	i;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	signal_amount = 1;
	while (str[i] && (str[i] == 43 || str[i] == 45))
	{
		if (str[i] == 45)
			signal_amount *= -1;
		i++;
	}
	*ptr_i = i;
	return (signal_amount);
}

int	nb_base(char str, char *base)
{
	int	nb;

	nb = 0;
	while (base[nb] != '\0')
	{
		if (str == base[nb])
			return (nb);
		nb++;
	}
	return (-1);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	i;
	int	negative;
	int	nb;
	int	nb2;
	int	base_from_length;

	nb = 0;
	i = 0;
	base_from_length = check_base_value(base_from);
	if (base_from_length >= 2)
	{
		negative = white_and_minus(nbr, &i);
		nb2 = nb_base(nbr[i], base_from);
		while (nb2 != -1)
		{
			nb = (nb * base_from_length) + nb2;
			i++;
			nb2 = nb_base(nbr[i], base_from);
		}
		return (go_next(nb * negative, base_to));
	}
	return (0);
}

/*int	main(void)
{
	char *str;

	str = ft_convert_base("	+++++-----2147483648", "0123456789", "01");
	printf("%s\n", str);
	free(str);
	return (0);
	//printf("%s\n", ft_convert_base("	     ---101010", "01", "01"));
	//printf("%s\n", ft_convert_base(" 	+---539", "0123456789abcdef", "01"));
}*/
