/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahbibe <bahbibe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 19:49:06 by bahbibe           #+#    #+#             */
/*   Updated: 2022/08/08 22:43:28 by bahbibe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_len(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	len = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			j++;
			len++;
		}
		i++;
	}
	i = 0;
	while (sep[i])
		i++;
	return (len + i * (size - 1));
}

char	*ft_cat(char *str, char **strs, char *sep, int size)
{
	int	i;
	int	j;
	int	k;
	int	l;

	i = 0;
	l = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			str[l++] = strs[i][j++];
		if (i < size - 1)
		{
			k = 0;
			while (sep[k])
				str[l++] = sep[k++];
		}
		i++;
	}
	str[l] = '\0';
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		len;

	len = ft_len(size, strs, sep);
	if (size == 0)
	{
		str = malloc(1);
		return (str);
	}
	str = malloc(len + 1);
	if (!str)
		return (0);
	return (ft_cat(str, strs, sep, size));
}
