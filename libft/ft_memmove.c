/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wehan <wehan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 12:14:29 by wehan             #+#    #+#             */
/*   Updated: 2025/10/21 20:04:07 by wehan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	void	*begin;

	if (!dest && !src)
		return (NULL);
	begin = dest;
	if (dest < src)
	{
		while (n--)
		{
			*(char *)dest = *(char *)src;
			dest = (char *)dest + 1;
			src = (char *)src + 1;
		}
	}
	else
	{
		while (n--)
			*((char *)dest + n) = *((char *)src + n);
	}
	return (begin);
}

// int	main(void)
// {
// 	size_t	i;

// 	int dest1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
// 	int dest2[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
// 	ft_memmove (dest1, dest1+2, 20);
// 	memmove (dest2, dest2+2, 20);
// 	i = 0;
// 	while (i < sizeof(dest1)/sizeof(int))
// 	{
// 		printf("ft_mem  :%d\n", dest1[i]);
// 		printf("standard:%d\n", dest2[i]);
// 		i++;
// 	}
// 	return (0);
// }
