/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_z.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpavard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 14:37:55 by kpavard           #+#    #+#             */
/*   Updated: 2022/07/28 14:41:53 by kpavard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

int	main(void)
{
	write(1, "z\n", 2);
	return (0);
}
