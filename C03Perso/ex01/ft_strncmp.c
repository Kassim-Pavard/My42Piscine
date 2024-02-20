/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpavard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 15:34:29 by kpavard           #+#    #+#             */
/*   Updated: 2022/07/17 16:48:12 by kpavard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	i++;
	}
	return (0);
}

//#include <string.h>
//#include <stdio.h>
//
//int	ft_strncmp(char *s1, char *s2, unsigned int n);
//
//int	main(void)
//{
//	char s1[] = "Test1";
//	char s2[] = "OK";
//	char s3[] = "Same";
//	char s4[] = "Size";
//	char s5[] = "Shorter";
//	char s6[] = "ThanMyself";
//	char s7[] = "ShorterTest";
//
//	printf("%d, %d\n", ft_strncmp(s1, s2, 4), strncmp(s1, s2, 4));
//	printf("%d, %d\n", ft_strncmp(s1, s2, 2), strncmp(s1, s2, 2));
//	printf("%d, %d\n", ft_strncmp(s3, s4, 4), strncmp(s3, s4, 4));
//	printf("%d, %d\n", ft_strncmp(s3, s4, 1), strncmp(s3, s4, 1));
//	printf("%d, %d\n", ft_strncmp(s5, s6, 3), strncmp(s5, s6, 3));
//	printf("%d, %d\n", ft_strncmp(s5, s5, 10), strncmp(s5, s5, 10));
//	printf("%d, %d\n", ft_strncmp(s5, s5, 5), strncmp(s5, s5, 5));
//	printf("%d, %d\n", ft_strncmp(s5, s7, 7), strncmp(s5, s7, 7));
//	printf("%d, %d\n", ft_strncmp(s5, s7, 8), strncmp(s5, s7, 8));
//
