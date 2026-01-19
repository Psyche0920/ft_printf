/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wehan <wehan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 11:04:57 by wehan             #+#    #+#             */
/*   Updated: 2025/10/21 20:01:49 by wehan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	void	*cur;

	cur = dest;
	if (!dest && !src)
		return (NULL);
	while (n--)
	{
		*(char *)dest = *(char *)src;
		dest = (char *)dest + 1;
		src = (char *)src + 1;
	}
	return (cur);
}

// int	main(void)
// {
// 	size_t	i;

// 	int dest1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
// 	int src1[] = {1, 2, 3, 4};
// 	int dest2[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
// 	int src2[] = {1, 2, 3, 4};
// 	ft_memcpy (dest1, src1, 17);
// 	memcpy (dest2, src2, 17);
// 	i = 0;
// 	while (i < sizeof(dest1)/sizeof(int))
// 	{
// 		printf("ft_mem  :%d\n", dest1[i]);
// 		printf("standard:%d\n", dest2[i]);
// 		i++;
// 	}
// 	return (0);
// }

// //unsigned char is unnecessary, coz no comparison like memcmp
