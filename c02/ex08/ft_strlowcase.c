/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likong <likong@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 11:00:37 by likong            #+#    #+#             */
/*   Updated: 2024/01/15 11:00:38 by likong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char	*temp;

	temp = str;
	while (*temp)
	{
		if (*temp <= 'Z' && *temp >= 'A')
		{
			*temp = *temp + 32;
		}
		temp++;
	}
	return (str);
}

/*int main(void)
{
	char	str[] = "ABcDe123&*^&&*AbvDcd";
	char	*upper;

	upper = ft_strlowcase(str);
	printf("%s", upper);
	return (0);
}*/
