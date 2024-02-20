/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpavard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 11:55:53 by kpavard           #+#    #+#             */
/*   Updated: 2022/07/09 12:25:31 by kpavard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	print_at(int line, int column, int max_l, int max_c)
{
	if (line == 0)
	{
		if (column == 0)
			ft_putchar('/');
		else if (column == max_c)
			ft_putchar('\\');
		else
			ft_putchar('*');
	}
	else if (line == max_l)
	{
		if (column == 0)
			ft_putchar('\\');
		else if (column == max_c)
			ft_putchar('/');
		else
			ft_putchar('*');
	}
	else
	{
		if (column == 0 || column == max_c)
			ft_putchar('*');
		else
			ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int	line;
	int	column;

	line = 0;
	while (line < y)
	{
		column = 0;
		while (column < x)
		{
			print_at(line, column, y - 1, x - 1);
			column++;
		}
		ft_putchar('\n');
		line++;
	}
}
