/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likong <likong@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 10:57:27 by likong            #+#    #+#             */
/*   Updated: 2024/01/23 10:57:32 by likong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	negative;
	int	nb;
	int	nb2;
	int	base_length;

	nb = 0;
	i = 0;
	base_length = check_base_value(base);
	if (base_length >= 2)
	{
		negative = white_and_minus(str, &i);
		nb2 = nb_base(str[i], base);
		while (nb2 != -1)
		{
			nb = (nb * base_length) + nb2;
			i++;
			nb2 = nb_base(str[i], base);
		}
		return (nb *= negative);
	}
	return (0);
}

/*int	main(void)
{
	printf("%d\n", ft_atoi_base("	+++++--133742", "0123456789"));
	printf("%d\n", ft_atoi_base("	     ---101010", "01"));
	printf("%d\n", ft_atoi_base(" 	+---539", "0123456789abcdef"));
}*/
