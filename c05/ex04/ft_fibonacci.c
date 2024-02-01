/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likong <likong@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 19:58:52 by likong            #+#    #+#             */
/*   Updated: 2024/01/22 19:58:54 by likong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index > 1)
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	return (index);
}

/*int main(void)
{
    printf("When n is -1000: %d\n", ft_fibonacci(-1000));
    printf("When n is 0: %d\n", ft_fibonacci(0));
    printf("When n is 1: %d\n", ft_fibonacci(1));
    printf("When n is 2: %d\n", ft_fibonacci(2));
    printf("When n is 3: %d\n", ft_fibonacci(3));
    printf("When n is 46: %d\n", ft_fibonacci(46));
    return (0);
}*/
