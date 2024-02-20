/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_position.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuluu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 11:51:01 by xuluu             #+#    #+#             */
/*   Updated: 2022/07/17 21:17:18 by kpavard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_position(char *tab_numero2, int nb)
{
	int	i;
	int	bon;

	bon = 0;
	i = nb;
	while (i < nb + 4)
	{
		if (tab_numero2[i] == '2' && tab_numero2[i + 4] == '2')
			bon++;
		else if ((tab_numero2[i] == '1' && tab_numero2[i + 4] == '2')
			|| (tab_numero2[i] == '2' && tab_numero2[i + 4] == '1'))
				bon++;
		else if ((tab_numero2[i] == '1' && tab_numero2[i + 4] == '3')
			|| (tab_numero2[i] == '3' && tab_numero2[i + 4] == '1'))
				bon++;
		else if ((tab_numero2[i] == '1' && tab_numero2[i + 4] == '4')
			|| (tab_numero2[i] == '4' && tab_numero2[i + 4] == '1'))
				bon++;
		else if ((tab_numero2[i] == '2' && tab_numero2[i + 4] == '3')
			|| (tab_numero2[i] == '3' && tab_numero2[i + 4] == '2'))
				bon++;
		i++;
	}
	return (bon);
}

int	check_corner(char *tab_numero2, int point1, int point2)
{
	int	bon;

	bon = 0;
	if (tab_numero2[point1] == '1' && tab_numero2[point2] == '1')
		bon++;
	else if (tab_numero2[point1] == '2' && tab_numero2[point2] == '2')
		bon++;
	else if (tab_numero2[point1] == '3' && tab_numero2[point2] == '3')
		bon++;
	else if (tab_numero2[point1] == '4' && tab_numero2[point2] == '4')
		bon++;
	else if ((tab_numero2[point1] == '2' && tab_numero2[point2] == '3')
		|| (tab_numero2[point1] == '3' && tab_numero2[point2] == '2'))
			bon++;
	else if ((tab_numero2[point1] == '2' && tab_numero2[point2] == '4')
		|| (tab_numero2[point1] == '4' && tab_numero2[point2] == '2'))
			bon++;
	else if ((tab_numero2[point1] == '3' && tab_numero2[point2] == '4')
		|| (tab_numero2[point1] == '4' && tab_numero2[point2] == '3'))
			bon++;
	return (bon);
}

int	corner(char *tab_numero2)
{
	int	check_coin;
	int	coin;

	coin = 0;
	check_coin = 0;
	while (check_coin < 4)
	{
		if (check_coin == 0)
			coin += check_corner(tab_numero2, 0, 8);
		else if (check_coin == 1)
			coin += check_corner(tab_numero2, 3, 12);
		else if (check_coin == 2)
			coin += check_corner(tab_numero2, 4, 11);
		else if (check_coin == 3)
			coin += check_corner(tab_numero2, 7, 15);
		check_coin++;
	}
	return (coin);
}
