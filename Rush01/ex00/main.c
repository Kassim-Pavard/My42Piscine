/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuluu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 11:25:42 by xuluu             #+#    #+#             */
/*   Updated: 2022/07/17 23:01:32 by kpavard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

void	ft_putchar(char c);
int		saisir(char *tab_numero1);
int		corner(char *tab_numero2);
int		check_position(char *tab_numero2, int nb);

void	print_tab(char *tab_numero3)
{
	int	tab[6][6];
	int	i;
	int	line;
	int	clone;

	for (int t = 0; t < 36; t++)
	{
		ft_putchar(tab_numero3[t]);
	}
	ft_putchar('\n');
	i = 0;
	line = 0;
	while (line < 6)
	{
		clone = 0;
		while (clone < 6)
		{
			tab[line][clone] = tab_numero3[i];
			if (clone == 5 && (line > 0 && line < 5))
			{
				if (tab[line][0] == '1')
					tab[line][1] = '4';
				if (tab[line][5] == '1')
					tab[line][4] = '4';
				if (tab[line][0] == '1' && tab[line][5] == '2')
					tab[line][4] = '3';
				if (tab[line][0] == '2' && tab[line][5] == '1')
					tab[line][1] = '3';
				if (tab[line][0] == '2' && tab[line][5] == '3')
					tab[line][2] = '4';
				if (tab[line][0] == '3' && tab[line][5] == '2')
					tab[line][3] = '4';
				if (tab[line][0] == '4')
				{
					tab[line][1] = '1';
					tab[line][2] = '2';
					tab[line][3] = '3';
					tab[line][4] = '4';
				}
				if (tab[line][5] == '4')
				{
					tab[line][4] = '1';
					tab[line][3] = '2';
					tab[line][2] = '3';
					tab[line][1] = '4';
				}
			}
			if (line == 5 && (clone > 0 && clone < 5))
			{
				if (tab[0][clone] == '1')
					tab[1][clone] = '4';
				if (tab[5][clone] == '1')
					tab[4][clone] = '4';
				if (tab[0][clone] == '1' && tab[5][clone] == '2')
					tab[4][clone] = '3';
				if (tab[0][clone] == '2' && tab[5][clone] == '1')
					tab[1][clone] = '3';
				if (tab[0][clone] == '2' && tab[5][clone] == '3')
					tab[2][clone] = '4';
				if (tab[0][clone] == '3' && tab[5][clone] == '2')
					tab[3][clone] = '4';
				if (tab[0][clone] == '4')
				{
					tab[1][clone] = '1';
					tab[2][clone] = '2';
					tab[3][clone] = '3';
					tab[4][clone] = '4';
				}
				if (tab[5][clone] == '4')
				{
					tab[4][clone] = '1';
					tab[3][clone] = '2';
					tab[2][clone] = '3';
					tab[1][clone] = '4';
				}
			}
			i++;
			clone++;
		}
		line++;
	}
	int	o;
	int	p;

	o = 0;
	while (o < 6)
	{
		p = 0;
		while (p < 6)
		{
			ft_putchar(tab[o][p]);
			p++;
		}
		if (p == 6)
			ft_putchar('\n');
		o++;
	}
}

void	tableau(char *tab_numero2)
{
	int		tab[6][6];
	int		line;
	int		clone;
	int		i;
	char	*tab_numero3;
	int		m;

	tab_numero3 = malloc(36);
	m = 0;
	i = 0;
	line = 0;
	while (line < 6)
	{
		clone = 0;
		while (clone < 6)
		{
			if (line == 0 && (clone > 0 && clone < 5))
			{
				tab[line][clone] = tab_numero2[i];
				i++;
			}
			else if (line == 5 && (clone > 0 && clone < 5))
			{
				tab[line][clone] = tab_numero2[i - 4];
				i++;
			}
			else if ((line > 0 && line < 5) && clone == 0)
				tab[line][0] = tab_numero2[i + 4];
			else if ((line > 0 && line < 5) && clone == 5)
			{
				tab[line][5] = tab_numero2[i + 8];
				i++;
			}
			else if (line > 0 && line < 5 && clone > 0 && clone < 5)
				tab[line][clone] = 48;
			else
				tab[line][clone] = 53;
			tab_numero3[m] = tab[line][clone];
			m++;
			clone++;
		}
		line++;
	}
	print_tab(tab_numero3);
}

char	*retrieve(char *tab_numero1)
{
	char	*tab_numero2;
	int		compteur;
	int		compteur2;

	compteur = 0;
	compteur2 = 0;
	tab_numero2 = malloc(16);
	while (tab_numero1[compteur] != '\0')
	{
		if (tab_numero1[compteur] >= '0' && tab_numero1[compteur] <= '9')
		{
			tab_numero2[compteur2] = tab_numero1[compteur];
			compteur2++;
		}
		compteur++;
	}
	return (tab_numero2);
}

int	main(int argc, char **argv)
{
	char	*tab_numero1;
	char	*tab_numero2;
	int		check_clone;
	int		check_line;
	int		check_coin;
	int		check_saisir;

	tab_numero1 = malloc(31);
	tab_numero2 = malloc(16);
	if (argc == 2)
	{
		tab_numero1 = argv[1];
		tab_numero2 = retrieve(tab_numero1);
		for (int i = 0; i < 16; i++)
		{
			ft_putchar(tab_numero2[i]);
		}
		ft_putchar('\n');
		check_saisir = saisir(tab_numero1);
		if (check_saisir == 0)
		{
			check_clone = check_position(tab_numero2, 0);
			check_line = check_position(tab_numero2, 8);
			check_coin = corner(tab_numero2);
			if (check_coin == 4 && check_clone == 4 && check_line == 4)
				tableau(tab_numero2);
			else
				ft_putchar('1');
		}
	}
	return (0);
}
