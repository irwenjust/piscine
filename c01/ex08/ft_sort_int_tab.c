/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likong <likong@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 11:58:49 by likong            #+#    #+#             */
/*   Updated: 2024/01/14 13:38:17 by likong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	swap_element(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		temp = i;
		while (j < size)
		{
			if (tab[j] < tab [temp])
			{
				temp = j;
			}
			j++;
		}
		swap_element(&tab[i], &tab[temp]);
		i++;
	}
}

/*int	main(void)
{
	int	tab[5] = {2, 3, 5, 1, 4}; 
	ft_sort_int_tab(tab, 5);
}*/
