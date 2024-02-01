/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likong <likong@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 11:11:11 by likong            #+#    #+#             */
/*   Updated: 2024/01/15 11:11:12 by likong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	go_up(char *temp, int up)
{
	if (up == 1)
	{
		*temp = *temp - 32;
		up = 0;
	}
	return (up);
}

int	go_down(char *temp, int up)
{
	if (up == 1)
	{
		up = 0;
	}
	else
	{
		*temp = *temp + 32;
	}
	return (up);
}

int	go_up_or_down(char *temp, int up)
{
	if (*temp <= 'z' && *temp >= 'a')
	{
		up = go_up(temp, up);
	}
	else
	{
		up = go_down(temp, up);
	}
	return (up);
}

char	*ft_strcapitalize(char *str)
{
	char	*temp;
	int		up;

	temp = str;
	up = 1;
	while (*temp)
	{
		if ((*temp <= 'z' && *temp >= 'a') || (*temp <= 'Z' && *temp >= 'A'))
		{
			up = go_up_or_down(temp, up);
		}
		else if (*temp <= '9' && *temp >= '0')
		{
			up = 0;
			temp++;
			continue ;
		}
		else
		{
			up = 1;
		}
		temp++;
	}
	return (str);
}

/*int main(void)
{
	char	str[] = "42mots quarante-deux; cinquante+et+un";
	char	*upper;

	upper = ft_strcapitalize(str);
	printf("%s", upper);
	return (0);
}*/
