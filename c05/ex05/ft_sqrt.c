/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likong <likong@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:53:23 by likong            #+#    #+#             */
/*   Updated: 2024/01/23 15:53:24 by likong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	num;

	num = 1;
	if (nb < 1)
		return (0);
	while (num < 46341 && num <= nb)
	{
		if (nb == num * num)
			return (num);
		num++;
	}
	return (0);
}

/*int main(void)
{
	printf("if num=1, rational number: %d\n", ft_sqrt(1));
	printf("if num=4, rational number: %d\n", ft_sqrt(4));
	printf("if num=2147395600, rational number: %d\n", ft_sqrt(2147395600));
	printf("if num=0, irrational number: %d\n", ft_sqrt(0));
	printf("if num=3, irrational number: %d\n", ft_sqrt(3));
	printf("if num=-11, irrational number: %d\n", ft_sqrt(-11));
	return (0);
}*/
