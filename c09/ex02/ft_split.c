/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likong <likong@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 14:19:07 by likong            #+#    #+#             */
/*   Updated: 2024/01/29 14:19:14 by likong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	check_sep(char c, char *sep)
{
	int	i;

	i = 0;
	while (sep[i])
	{
		if (sep[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	str_length(char *str, char *sep)
{
	int	i;

	i = 0;
	while (str[i] && !check_sep(str[i], sep))
		i++;
	return (i);
}

char	*ft_strdup(char *src, int n)
{
	int		i;
	char	*temp;

	i = 0;
	temp = (char *)malloc((n + 1) * sizeof(char));
	if (!temp)
		return (0);
	while (src[i] != '\0' && i < n)
	{
		temp[i] = src[i];
		i++;
	}
	temp[i] = '\0';
	return (temp);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	int		str_len;
	char	**strs;

	i = 0;
	j = 0;
	while (str[i])
		i++;
	strs = (char **)malloc((i + 1) * sizeof(char *));
	if (strs == NULL || str == NULL || charset == NULL)
		return (NULL);
	i = 0;
	while (str[i])
	{
		while (str[i] && check_sep(str[i], charset))
			i++;
		str_len = str_length(str + i, charset);
		if (str_len > 0)
			strs[j++] = ft_strdup(str + i, str_len);
		i += str_len;
	}
	strs[j] = NULL;
	return (strs);
}

/*int	main(void)
{
	int		i;
	char	**str;

	i = 0;
	str = ft_split("fdafajfdalfdj", "ad");
	if (str != NULL)
	{
		while (str[i] != NULL)
		{
			printf("%s\n", str[i]);
			i++;
		}
	}
	else
		printf("error\n");
	i = 0;
	while (str[i] != NULL)
	{
		free(str[i]);
		i++;
	}
	free(str);
	return (0);
}*/
