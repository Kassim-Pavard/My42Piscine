/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpavard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 14:39:23 by kpavard           #+#    #+#             */
/*   Updated: 2022/07/24 17:21:19 by kpavard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	*t;
	int	i;

	if (min >= max)
		return (NULL);
	max -= min;
	t = (int *)malloc(max * sizeof(int));
	if (!t)
		return (NULL);
	i = 0;
	while (i < max)
	{
		t[i] = min + i;
		i++;
	}
	return (t);
}
