/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likong <likong@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 10:11:14 by likong            #+#    #+#             */
/*   Updated: 2024/01/15 10:11:15 by likong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//ASCLL range: 32(' ') - 126('~')
int	ft_str_is_printable(char *str)
{
	int	correct_or_not;

	while (*str)
	{
		if (*str < ' ' || *str > '~')
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

	str = "     \n    ";
	correct_or_not = ft_str_is_printable(str);
	printf("%d\n", correct_or_not);
	return (0);
}*/
