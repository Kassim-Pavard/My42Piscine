/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpavard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 23:05:17 by kpavard           #+#    #+#             */
/*   Updated: 2022/07/18 23:21:06 by kpavard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	size2;
	unsigned int	size3;

	size3 = ft_strlen(src);
	i = 0;
	j = 0;
	while (dest[j] != '\0')
		j++;
	size2 = j;
	if (size == 0 || size <= size2)
		return (size3 + size);
	while (src[i] != '\0' && size - size2 - 1 > i)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (size2 + size3);
}
