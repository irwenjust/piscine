/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likong <likong@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 18:51:23 by likong            #+#    #+#             */
/*   Updated: 2024/01/22 18:51:25 by likong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (nb == 0 && power == 0)
		return (1);
	if (power > 1)
		return (ft_recursive_power(nb, power - 1) * nb);
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	return (nb);
}

/*int main(void)
{
	printf("if 2^30: %d\n", ft_recursive_power(2, 30));
	printf("if 2^0: %d\n", ft_recursive_power(2, 0));
	printf("if 2^-1: %d\n", ft_recursive_power(2, -1));
	printf("if 0^0: %d\n", ft_recursive_power(0, 0));
	return (0);
}*/
