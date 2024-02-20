/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_saisir.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuluu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 11:50:40 by xuluu             #+#    #+#             */
/*   Updated: 2022/07/17 17:57:50 by xuluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length] != '\0')
		length++;
	return (length - 1);
}

int	saisir(char *tab_numero1)
{
	int	m;
	int	n;
	int	error;
	int	tab_numero1_length;

	error = 0;
	tab_numero1_length = ft_strlen(tab_numero1);
	if (tab_numero1_length == 30)
	{
		m = 0;
		n = 1;
		while (m < 31)
		{
			if (!(tab_numero1[m] >= '0' && tab_numero1[m] <= '9'))
				error++;
			if ((!(tab_numero1[n] == 32)) && n < 31)
				error++;
			m += 2;
			n += 2;
		}
	}
	else
		error = 1;
	return (error);
}
