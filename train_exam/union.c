/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpavard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 20:35:49 by kpavard           #+#    #+#             */
/*   Updated: 2022/07/28 21:21:09 by kpavard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft(char *str, int p, char c)
{
	int	i;

	i = 0;
	while (i < p)
	{
		if (str[i] == c)
			return (0);
		else
			i++;
	}
	return (1);
}

void	ft_union(char *s1, char *s2)
{
	int	i;
	int j;

	i = 0;
	j = 0;
	while (s1[i])
	{
		if (ft(s1, i, s1[i]) == 1)
			ft_putchar(s1[i]);
		i++;
	}
	while (s2[j])
	{
		if (ft(s2, j, s2[j]) == 1 && ft(s1, i, s2[j]))
			ft_putchar(s2[j]);
		j++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 3)
		ft_union(av[1], av[2]);
	ft_putchar('\n');
	return (0);
}
