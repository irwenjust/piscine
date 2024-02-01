/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likong <likong@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 09:58:27 by likong            #+#    #+#             */
/*   Updated: 2024/01/15 09:58:34 by likong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	correct_or_not;

	while (*str)
	{
		if (*str < 'A' || *str > 'Z')
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

	str = "ABC";
	correct_or_not = ft_str_is_uppercase(str);
	printf("%d\n", correct_or_not);
	return (0);
}*/
