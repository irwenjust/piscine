/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   general.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likong <likong@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 19:56:05 by likong            #+#    #+#             */
/*   Updated: 2024/01/31 19:56:07 by likong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../librarys/bsq.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_error(char *errorinfo)
{
	write(STDERR_FILENO, errorinfo, ft_strlen(errorinfo));
}

void	ft_assert(int condition, char *errorinfo)
{
	if (!condition)
	{
		if (errorinfo != NULL)
			ft_print_error(errorinfo);
		exit(EXIT_FAILURE);
	}
}

int	ft_is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_is_printable(unsigned char c)
{
	return (c >= 32 && c <= 126);
}
