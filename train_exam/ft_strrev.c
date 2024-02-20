/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpavard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 17:30:01 by kpavard           #+#    #+#             */
/*   Updated: 2022/07/14 18:26:36 by kpavard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

int	*ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strrev(char *str)
{
	int i;
	int len;
	char swap;

	i = 0;
	len = ft_strlen(str) - 1;
	while (i < len)
	{
		swap = str[i];
		str[i] = str[len];
		str[len] = swap;
		len--;
		i++
	}
	return(str);
}


