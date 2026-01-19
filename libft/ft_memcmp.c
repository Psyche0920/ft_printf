/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wehan <wehan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 15:03:34 by wehan             #+#    #+#             */
/*   Updated: 2025/10/20 19:19:25 by wehan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;

	p1 = s1;
	p2 = s2;
	while (n--)
	{
		if (*p1 != *p2)
			return (*p1 - *p2);
		p1++;
		p2++;
	}
	return (0);
}

// int	main(void)
// {
// 	int s1[] = {1, 2, 3, 4};
// 	int s2[] = {1, 0, 3};
// 	printf("ft_memcmp=%d\n", ft_memcmp(s1, s2, 8));
// 	printf("memcmp=%d\n", memcmp(s1, s2, 8));
// 	return (0);
// }
// //void pinter cannot for calculation. to avoid everytime 
////unsigned char converstion, just use const unsigned char * 
