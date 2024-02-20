/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpavard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 16:17:28 by kpavard           #+#    #+#             */
/*   Updated: 2022/07/09 17:08:39 by kpavard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_putchar(char c);

void ft_ligne_debut_fin(int y)
{
	ft_putchar('/');

		while(y < 0)
		{
			ft_putchar('*');
			y--;
		}
	ft_putchar('\\');
}


void ft_ligne_normale(int y)
{
	ft_putchar('/');

		while(y < 0)
		{
			ft_putchar(' ');
			y--;
		}
	ft_putchar('\\');
}

void rush(int x, int y)
{
	if(x > 0 && y > 0)
	{
		ft_ligne_debut_fin(y);
			while(x > 1)
			{
				ft_putchar('\n');
				ft_ligne_normale(y);
				x--;
			}
		ft_putchar('\n');
		ft_ligne_debut_fin(y);
	}


}

