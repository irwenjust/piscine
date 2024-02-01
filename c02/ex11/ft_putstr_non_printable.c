/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likong <likong@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 14:38:48 by likong            #+#    #+#             */
/*   Updated: 2024/01/15 14:38:50 by likong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_hexadecimals(int num)
{
	char	n;

	if (num < 10)
	{
		n = '0' + num;
		write(1, &n, 1);
	}
	else
	{
		n = 'a' + num % 10;
		write(1, &n, 1);
	}
}

void	trans_to_hexadecimals(int asc_num)
{
	int	i;
	int	j;

	i = asc_num / 16;
	j = asc_num % 16;
	write_hexadecimals(i);
	write_hexadecimals(j);
}

void	ft_putstr_non_printable(char *str)
{
	int		asc_num;
	char	backslash;

	backslash = '\\';
	while (*str)
	{
		if (*str >= 32 && *str <= 127)
		{
			write(1, str, 1);
		}
		else
		{
			write(1, &backslash, 1);
			asc_num = *str;
			trans_to_hexadecimals(asc_num);
		}
		str++;
	}
}

/*int main(void)
{
	char str[] = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(str);
	return (0);
}*/
