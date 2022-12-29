/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahbibe <bahbibe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 16:57:53 by bahbibe           #+#    #+#             */
/*   Updated: 2022/07/30 21:50:41 by bahbibe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_strlowcase(char *str)
{
	int	i;

i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	isfirst;

	i = 0;
	isfirst = 1;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (isfirst == 1)
			{
				str[i] -= 32;
				isfirst = 0;
			}
		}
		else if (str[i] >= '0' && str[i] <= '9')
			isfirst = 0;
		else
			isfirst = 1 ;
		i++;
	}
	return (str);
}
