/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likong <likong@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 19:35:20 by likong            #+#    #+#             */
/*   Updated: 2024/01/23 19:35:21 by likong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	num;

	num = 2;
	if (nb < 2)
		return (0);
	while (num != nb)
	{
		if (nb % num == 0)
			return (0);
		num++;
	}
	return (1);
}

/*int	main(void)
{
	printf("-1 is prime number? %d\n", ft_is_prime(-1));
	printf("0 is prime number? %d\n", ft_is_prime(0));
	printf("1 is prime number? %d\n", ft_is_prime(1));
	printf("2 is prime number? %d\n", ft_is_prime(2));
	printf("5 is prime number? %d\n", ft_is_prime(5));
	printf("6 is prime number? %d\n", ft_is_prime(6));
	printf("2147483647 is prime number? %d\n", ft_is_prime(2147483647));
	return (0);
}*/
