/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wehan <wehan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 19:15:58 by wehan             #+#    #+#             */
/*   Updated: 2025/10/20 19:20:28 by wehan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n--)
	{
		if (*(unsigned char *)s == (unsigned char)c)
			return ((void *)s);
		s = (unsigned char *)s + 1;
	}
	return (NULL);
}

// int	main(void)
// {
//printf("s=abcdce, c=c, n=6, ft_memchr=%s\n", 
//(char *)ft_memchr("abcdc", 'c', 6));
// 	printf("s=abcdce, c=c, n=6, memchr=%s\n", (char *)memchr("abcdc", 'c', 6));
//printf("s=abcdce, c=c, n=2, ft_memchr=%s\n", 
//(char *)ft_memchr("abcdc", 'c', 2));
// 	printf("s=abcdce, c=c, n=2, memchr=%s\n", (char *)memchr("abcdc", 'c', 2));
// 	printf("s=a, c=c, n=1, ft_memchr=%s\n", (char *)memchr("a", 'c', 1));
// 	printf("s=a, c=c, n=1, memchr=%s\n", (char *)memchr("a", 'c', 1));
// 	return (0);
// }