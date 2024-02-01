/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likong <likong@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 14:14:26 by likong            #+#    #+#             */
/*   Updated: 2024/01/30 14:14:34 by likong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "ft_stock_str.h"
#include <stdio.h>

t_stock_str	*ft_strs_to_tab(int ac, char **av);

void	put_char(char c)
{
	write(1, &c, 1);
}

void	put_str(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		put_char(str[i++]);
	put_char('\n');
}

void	putnbr(int n)
{
	long	num;

	num = n;
	if (num < 0)
	{
		write(1, "-", 1);
		num = -num;
	}
	if (num < 10)
		put_char(num + '0');
	else
	{
		putnbr(num / 10);
		put_char(num + '0');
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != NULL)
	{
		put_str(par[i].str);
		putnbr(par[i].size);
		put_char('\n');
		put_str(par[i].copy);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int			i;
	t_stock_str	*array;

	array = ft_strs_to_tab(argc - 1, argv + 1);
	ft_show_tab(array);
	i = 0;
	/*while (i < argc - 1)
	{
		free(array[i].str);
		free(array[i].copy);
		i++;
	}
	free(array);*/
	return (0);
}
