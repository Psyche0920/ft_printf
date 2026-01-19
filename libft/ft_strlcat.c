/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wehan <wehan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 20:10:51 by wehan             #+#    #+#             */
/*   Updated: 2025/10/21 21:16:01 by wehan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <bsd/string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_src;
	size_t	len_dst;
	size_t	i;

	len_src = 0;
	while (src[len_src])
		len_src++;
	len_dst = 0;
	while (len_dst < size && dst[len_dst])
		len_dst++;
	if (size <= len_dst)
		return (len_src + size);
	i = 0;
	while (src[i] && i < (size - len_dst - 1))
	{
		dst[len_dst + i] = src[i];
		i++;
	}
	dst[len_dst + i] = '\0';
	return (len_src + len_dst);
}

// int	main(void)
// {
// 	char dst1_2[9] = "hello";
// 	char dst1_3[9] = "hello";
////dst3 more than enough spacmakee, 
////dst1 enough space, dst2 less than enough space;
//printf("dest=hello, src=abc, r_l_c=%zu, size=9, dst=%s\n", 
//ft_strlcat(dst1_2, "abc", 9), dst1_2);
//printf("dest=hello, src=abc, r_l_c=%zu, size=9, dst=%s\n", 
//strlcat(dst1_3, "abc", 9), dst1_3);
// 	return (0);
// }
//// wrong, zifuchuanzimianliang 
////cannot be changed ft_strlcat("hello", "abc", 5);
////if (size <= dst_len), size means the total length to create, 
////should at least >=dst; if =dst, = d
//while (len_dst < size && dst[len_dst])
//        len_dst++;
////this is to prevent dst has no null-termination
//if (len_dst >= size)  // 既检查 == 也检查 <
//        return (len_src + size);
////this is to prevent illegality of size <= len_dst
