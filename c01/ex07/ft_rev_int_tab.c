/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likong <likong@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 11:09:48 by likong            #+#    #+#             */
/*   Updated: 2024/01/14 13:35:17 by likong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	ft_rev_int_tab(int *tab, int size)
{
	int	num;
	int	temp;

	num = 0;
	while (num < size / 2)
	{
		temp = tab[num];
		tab[num] = tab[size - num - 1];
		tab[size - num - 1] = temp;
		num++;
	}
}

int	main(void)
{
	int	tab[5] = {1, 2, 3, 4, 5};
	ft_rev_int_tab(tab, 5);
	return (0);
}
