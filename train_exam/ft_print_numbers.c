/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpavard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 14:45:32 by kpavard           #+#    #+#             */
/*   Updated: 2022/07/28 14:51:27 by kpavard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	int	i;
	i = 0;
	while (i < 10)
	{
		ft_putchar(i + 48);
		i++;
	}
}

int	main(void)
{
	ft_print_numbers();
	return (0);
}
