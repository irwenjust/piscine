/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likong <likong@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 10:31:37 by likong            #+#    #+#             */
/*   Updated: 2024/01/15 10:31:38 by likong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	char	*temp;

	temp = str;
	while (*temp)
	{
		if (*temp <= 'z' && *temp >= 'a')
		{
			*temp = *temp - 32;
		}
		temp++;
	}
	return (str);
}

/*int main(void)
{
	char	str[] = "abcDe123&*^&&*abvDcd";
	char	*upper;

	upper = ft_strupcase(str);
	printf("%s", upper);
	return (0);
}*/
