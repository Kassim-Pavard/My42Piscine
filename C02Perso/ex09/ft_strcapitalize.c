/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpavard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 19:04:47 by kpavard           #+#    #+#             */
/*   Updated: 2022/07/14 21:02:56 by kpavard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	first_str(char *str)
{
	if ((str[0] >= 'a') && (str[0] <= 'z'))
	{
		str[0] = str[0] - 32;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	first_str(str);
	i = 1;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A') && (str[i] <= 'Z'))
		{
			str[i] = str[i] + 32;
		}
		if ((str[i] <= 'z' ) && (str[i] >= 'a'))
		{
			if ((str[i - 1] > 'z')
				|| ((str[i - 1] < 'a') && (str[i - 1] > 'Z'))
				|| ((str[i - 1] < 'A') && (str[i - 1] > '9'))
				|| (str[i - 1] < '0'))
			{
				str[i] = str[i] - 32;
			}
		}
		i++;
	}
	return (str);
}
