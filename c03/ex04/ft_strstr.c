/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likong <likong@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 18:37:20 by likong            #+#    #+#             */
/*   Updated: 2024/01/16 18:37:22 by likong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	start_matching(char *str, char *to_find)
{
	char	*temp;
	int		i;

	temp = to_find;
	while (*temp)
	{
		if (*str != *temp)
		{
			i = 0;
			return (i);
		}
		str++;
		temp++;
	}
	i = 1;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	match;

	match = 0;
	if (*to_find == '\0')
		return (str);
	while (*str)
	{
		if (*str == *to_find)
		{
			match = start_matching(str, to_find);
			if (match == 1)
			{
				return (str);
			}
		}
		str++;
	}
	return (0);
}

/*int	main(void)
{
	char *s1 = "abcd";
	char *s2 = "cd";

	printf("%s", ft_strstr(s1, s2));
}*/
