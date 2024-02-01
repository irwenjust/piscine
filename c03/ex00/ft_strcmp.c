/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likong <likong@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 18:28:37 by likong            #+#    #+#             */
/*   Updated: 2024/01/15 18:28:38 by likong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	compare;

	while (*s1 && *s2)
	{
		if (*s1 != *s2)
		{
			compare = *s1 - *s2;
			return (compare);
		}
		s1++;
		s2++;
	}
	if (*s1 == '\0' && *s2 == '\0')
	{
		compare = 0;
	}
	else
	{
		compare = *s1 - *s2;
	}
	return (compare);
}

/*int	main(void)
{
	int i = 0;

	char *s2 = "abc";
	char *s1 = "abc";
	i = ft_strcmp(s1, s2);
	printf("%d", i);
}*/
