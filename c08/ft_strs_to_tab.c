/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahbibe <bahbibe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 11:17:48 by bahbibe           #+#    #+#             */
/*   Updated: 2022/08/10 13:54:40 by bahbibe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*dup ;

	i = 0;
	dup = malloc(ft_strlen(src) + 1);
	if (dup == 0)
		return (0);
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*t;

	t = malloc((ac + 1) * sizeof(*t));
	if (!t)
		return (NULL);
	i = 0;
	while (i < ac)
	{	
			t[i].size = ft_strlen(av[i]);
			t[i].str = av[i];
			t[i].copy = ft_strdup(av[i]);
			i++;
	}
	t[i].str = 0;
	return (t);
}
