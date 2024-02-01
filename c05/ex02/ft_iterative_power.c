/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likong <likong@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 18:39:34 by likong            #+#    #+#             */
/*   Updated: 2024/01/22 18:39:35 by likong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (nb == 0 && power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (power > 0)
	{
		result = result * nb;
		power--;
	}
	return (result);
}

/*int main(void)
{
	printf("if 2^30: %d\n", ft_iterative_power(2, 30));
	printf("if 2^0: %d\n", ft_iterative_power(2, 0));
	printf("if 2^-1: %d\n", ft_iterative_power(2, -1));
	printf("if 0^0: %d\n", ft_iterative_power(0, 0));
	return (0);
}*/