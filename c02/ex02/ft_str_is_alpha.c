/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likong <likong@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 08:33:45 by likong            #+#    #+#             */
/*   Updated: 2024/01/15 08:33:46 by likong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	correct_or_not;

	while (*str)
	{
		if (*str < 'A' || (*str > 'Z' && *str < 'a') || *str > 'z')
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

	str = "abcde\n";
	correct_or_not = ft_str_is_alpha(str);
	printf("%d\n", correct_or_not);
	return (0);
}*/
