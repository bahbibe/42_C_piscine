/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahbibe <bahbibe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 20:24:53 by bahbibe           #+#    #+#             */
/*   Updated: 2022/07/24 19:11:25 by bahbibe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	c1;
	int	c2;

	c1 = 0;
	while (c1 < 99)
	{
		c2 = c1 + 1;
		while (c2 <= 99)
		{
			ft_putchar(c1 / 10 + '0');
			ft_putchar(c1 % 10 + '0');
			ft_putchar(' ');
			ft_putchar(c2 / 10 + '0');
			ft_putchar(c2 % 10 + '0');
			if (c1 != 98)
			{
				write(1, ", ", 2);
			}
			c2++;
		}
	c1++;
	}
}
