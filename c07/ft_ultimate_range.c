/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahbibe <bahbibe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 05:23:07 by bahbibe           #+#    #+#             */
/*   Updated: 2022/08/09 01:23:52 by bahbibe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{	
	int	i;
	int	rng;

	rng = max - min;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	*range = malloc(sizeof(int) * rng);
	if (!range)
	{
		*range = 0;
		return (-1);
	}
	i = 0;
	while (i < rng)
	{
		range[0][i] = min + i;
		i++;
	}
	return (rng);
}
