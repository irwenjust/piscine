/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likong <likong@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 09:59:22 by likong            #+#    #+#             */
/*   Updated: 2024/01/17 09:59:24 by likong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	find_number(char *str)
{
	int	number;

	number = 0;
	while (*str >= '0' && *str <= '9')
	{
		number = number * 10;
		number = *str - '0' + number;
		str++;
	}
	return (number);
}

// the white space range: 9-13('\t - \r') and 32(' ')
int	ft_atoi(char *str)
{
	int	signal_amount;
	int	number;

	signal_amount = 1;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			signal_amount = signal_amount * (-1);
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		number = find_number(str) * signal_amount;
		return (number);
	}
	return (0);
}

/*int	main(void)
{
	char *str = " ---+-+02147483648ab567";
	int value = ft_atoi(str);
	printf("%d\n", value);
	return (0);
}*/
