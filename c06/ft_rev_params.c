/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahbibe <bahbibe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 16:45:57 by bahbibe           #+#    #+#             */
/*   Updated: 2022/08/03 23:49:36 by bahbibe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = ac - 1 ;
	if (ac != 1)
	{		
		while (i > 0)
		{	
			j = 0;
			while (av[i][j])
			{
				write (1, &av[i][j], 1);
			j++;
			}
			write (1, "\n", 1);
		i--;
		}
	}
}