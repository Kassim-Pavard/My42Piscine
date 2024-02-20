/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpavard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 16:17:32 by kpavard           #+#    #+#             */
/*   Updated: 2022/07/25 14:51:00 by kpavard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	max -= min;
	*range = (int *)malloc(sizeof(int) * max);
	if (!(*range))
		return (-1);
	i = 0;
	while (i < max)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (max);
}
