/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likong <likong@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 13:07:53 by likong            #+#    #+#             */
/*   Updated: 2024/01/12 09:40:53 by likong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int i)
{
	char	negative;
	char	positive;

	negative = 'N';
	positive = 'P';
	if (i < 0)
	{
		write(1, &negative, 1);
	}
	else
	{
		write(1, &positive, 1);
	}
}

/*int	main(void)
{
	int	i;

	i = 5;
	ft_is_negative(i);
	return (0);
}*/
