/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likong <likong@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 19:52:22 by likong            #+#    #+#             */
/*   Updated: 2024/01/23 19:52:23 by likong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	check_prime(int num)
{
	int	i;

	i = 2;
	while (i <= num / i)
	{
		if (num % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	while (nb >= 2)
	{
		if (check_prime(nb))
			return (nb);
		if (nb % 2 == 0)
			nb++;
		else
			nb = nb + 2;
	}
	return (0);
}

int	main(void)
{
	printf("2096003698 next prime: %d\n", ft_find_next_prime(2096003698));
	printf("1 next prime: %d\n", ft_find_next_prime(1));
	printf("2 next prime: %d\n", ft_find_next_prime(2));
	printf("4 next prime: %d\n", ft_find_next_prime(4));
	printf("2147483630 next prime: %d\n", ft_find_next_prime(2147483630));
	return (0);
}
