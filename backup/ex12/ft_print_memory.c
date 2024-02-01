/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likong <likong@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 16:34:23 by likong            #+#    #+#             */
/*   Updated: 2024/01/15 16:34:25 by likong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	write_hexadecimals(int num)
{
	char	n;

	if (num < 10)
	{
		n = '0' + num;
		write(1, &n, 1);
	}
	else
	{
		n = 'a' + num % 10;
		write(1, &n, 1);
	}
}

void	trans_to_hexadecimals(int asc_num)
{
	int	i;
	int	j;

	i = asc_num / 16;
	j = asc_num % 16;
	write_hexadecimals(i);
	write_hexadecimals(j);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	int i;
	uintptr_t address;

	i = 0;
	while (i < size)
	{
		address = (uintptr_t)addr;
		printf("%x", (unsigned long long)address);
		addr++;
		i++;
	}	
}

int main()
{
	char a[] = "ABC";

	//*ft_print_memory(a, 3);
	//char *b = &a;
	//char addr_str[17];
	//sprintf(addr_str, "%016lx", (unsigned long)&a);
	//write(1, b, 19);
	return (0);
}
