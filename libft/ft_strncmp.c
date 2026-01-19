/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wehan <wehan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 17:54:35 by wehan             #+#    #+#             */
/*   Updated: 2025/10/20 19:05:02 by wehan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && s1[i] && s1[i] == s2[i])
		i++;
	if (i == n)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

// int	main(void)
// {
// 	char *s1 = "abc";
// 	char *s2 = "abcd";

//printf("ft: s1=abc, s2=abcd, size=3, comparison=%d\n", ft_strncmp(s1, s2, 3));
//printf("s1=abc, s2=abcd, size=3, comparison=%d\n", strncmp(s1, s2, 3));
//printf("ft: s1=abc, s2=abcd, size=4, comparison=%d\n", ft_strncmp(s1, s2, 4));
// 	printf("s1=abc, s2=abcd, size=4, comparison=%d\n", strncmp(s1, s2, 4));
// 	return (0);
// }
//
//int	ft_strncmp(const char *s1, const char *s2, size_t n)
//{
//	size_t	i;
//
//	i = 0;
//	while (i < n && (s1[i] || s2[i])
//	{		
//		if (s1[i] != s2[i])
//			return ((unsigned char)s1[i] - (unsigned char)s2[i]));
//		i++;
//	}
//	return (0);
//}
//version B first compare and then return, 
//but version a directly return when it encounters \0
