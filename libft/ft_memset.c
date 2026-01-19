/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wehan <wehan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 17:19:12 by wehan             #+#    #+#             */
/*   Updated: 2025/10/20 19:17:35 by wehan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	void	*p;

	p = s;
	while (n--)
	{
		*(unsigned char *)s = (unsigned char) c;
		s = (unsigned char *)s + 1;
	}
	return (p);
}

// int main()
// {
// 	char s[] = "hello bit";
// 	printf("hello bit => %s\n", (char *)ft_memset(s, 'x', 5));
// 	printf("hello bit => %s\n", (char *)memset(s, 'x', 5));
// 	return (0);
// }
