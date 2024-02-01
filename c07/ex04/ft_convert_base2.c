/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likong <likong@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 12:05:54 by likong            #+#    #+#             */
/*   Updated: 2024/01/29 12:05:55 by likong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		check_base_value(char *base);

void	swap_str(char *str)
{
	int		i;
	int		num;
	char	temp;

	i = 0;
	num = 0;
	while (str[num])
		num++;
	while (i < num / 2)
	{
		temp = str[i];
		str[i] = str[num - 1 - i];
		str[num - 1 - i] = temp;
		i++;
	}
}

char	*tran_str_by_base(int nbr, char *base, int base_length, char *str)
{
	int		i;
	int		negative;
	long	test;

	i = 0;
	test = nbr;
	negative = 0;
	if (test < 0)
	{
		negative = 1;
		test = -(long)test;
	}
	while (test / base_length != 0)
	{
		str[i] = base[test % base_length];
		i++;
		test = test / base_length;
	}
	str[i] = base[test % base_length];
	if (negative == 1)
		str[++i] = '-';
	str[i + 1] = '\0';
	swap_str(str);
	return (str);
}

int	count_space(int num)
{
	int	temp;

	temp = 0;
	if (num > 0)
	{
		num /= 10;
		temp++;
	}
	return (temp);
}

char	*go_next(int nbr, char *base_to)
{
	int		base_to_length;
	char	*str;

	base_to_length = check_base_value(base_to);
	if (base_to_length < 2)
		return (0);
	str = (char *)malloc((count_space(nbr) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str = tran_str_by_base(nbr, base_to, base_to_length, str);
	return (str);
}
