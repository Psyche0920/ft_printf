/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wehan <wehan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 20:20:34 by wehan             #+#    #+#             */
/*   Updated: 2025/10/20 19:41:45 by wehan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	while (n--)
	{
		*(char *)s = '\0';
		s = (char *)s + 1;
	}
}

// int	main(void)
// {
// 	char s1[] = "abc123cde";
// 	char s2[] = "abc123cde";
// 	ft_bzero(s1+3, 6);
// 	printf("s=abc123cde+3, n=6, ft_bzero=%s\n", s1);
// 	bzero(s2+3, 6);
// 	printf("s=abc123cde+3, n=6, bzero=%s\n", s2);
// 	return (0);
// }
