/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahbibe <bahbibe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 04:26:16 by bahbibe           #+#    #+#             */
/*   Updated: 2022/08/08 09:06:08 by bahbibe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*rang;
	int	i ;

	i = 0 ;
	if (min >= max)
		return (0);
	rang = malloc((max - min) * sizeof(int));
	if (rang == 0)
		return (0);
	while (min < max)
	{
		rang[i] = min ;
		i++;
		min++;
	}
	return (rang);
}
