/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likong <likong@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 15:02:29 by likong            #+#    #+#             */
/*   Updated: 2024/01/22 15:02:30 by likong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb == 0 || nb == 1)
		return (1);
	if (nb < 0)
		return (0);
	return (ft_recursive_factorial(nb - 1) * nb);
}

/*int main(void)
{
	printf("When given number is -1: %d\n", ft_recursive_factorial(-1));
	printf("When given number is 0: %d\n", ft_recursive_factorial(0));
	printf("When given number is 2: %d\n", ft_recursive_factorial(2));
	printf("When given number is 16: %d\n", ft_recursive_factorial(16));
	printf("When given number is 123: %d\n", ft_recursive_factorial(123));
	return (0);
}*/
