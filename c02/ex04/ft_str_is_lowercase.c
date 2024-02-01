/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likong <likong@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 09:54:17 by likong            #+#    #+#             */
/*   Updated: 2024/01/15 09:54:19 by likong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	correct_or_not;

	while (*str)
	{
		if (*str < 'a' || *str > 'z')
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

	str = "abcde";
	correct_or_not = ft_str_is_lowercase(str);
	printf("%d\n", correct_or_not);
	return (0);
}*/
