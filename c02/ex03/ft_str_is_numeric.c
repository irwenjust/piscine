/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likong <likong@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 09:19:51 by likong            #+#    #+#             */
/*   Updated: 2024/01/15 09:19:52 by likong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	correct_or_not;

	while (*str)
	{
		if (*str < '0' || *str > '9')
		{
			correct_or_not = 0;
			return (correct_or_not);
		}
		str++;
	}
	correct_or_not = 1;
	return (correct_or_not);
}

/*int	main(void)
{
	char	*str;
	int		correct_or_not;

	str = "";
	correct_or_not = ft_str_is_numeric(str);
	printf("%d\n", correct_or_not);
	return (0);
}*/
