/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpavard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 11:35:18 by kpavard           #+#    #+#             */
/*   Updated: 2022/07/10 11:41:12 by kpavard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_espace(void)
{
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_affiche_nombre(char i, char j, char k)
{
	ft_putchar(i);
	ft_putchar(j);
	ft_putchar(k);
}

void	ft_print_comb(void)
{
	char	tab[3];

	tab[0] = '0';
	tab[1] = '1';
	tab[2] = '2';
	while (tab[0] <= '7')
	{
		tab[1] = tab[0] + 1;
		while (tab[1] <= '8')
		{
			tab[2] = tab[1] + 1;
			while (tab[2] <= '9')
			{
				ft_affiche_nombre(tab[0], tab[1], tab[2]);
				if (tab[0] != '7' || tab[1] != '8' || tab[2] != '9')
					ft_espace();
				tab[2]++;
			}
			tab[1]++;
		}
		tab[0]++;
	}
}
