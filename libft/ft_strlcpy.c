/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wehan <wehan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 17:45:27 by wehan             #+#    #+#             */
/*   Updated: 2025/10/20 19:06:20 by wehan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <bsd/string.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	len_src;
	size_t	i;

	len_src = 0;
	while (src[len_src])
		len_src++;
	if (size == 0)
		return (len_src);
	i = 0;
	while (src[i] && i < (size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len_src);
}

// int main()
// {
// 	char dst[10];
// 	printf("ft: src=%zu, size=6, dest=%s\n",ft_strlcpy(dst, "hello", 6), dst);
// 	printf("ft: src=%zu, size=5, dest=%s\n",ft_strlcpy(dst, "hello", 5), dst);
// 	printf("ft: src=%zu, size=7, dest=%s\n",ft_strlcpy(dst, "hello", 7), dst);
// 	printf("st: src=%zu, size=6, dest=%s\n",strlcpy(dst, "hello", 6), dst);
// 	printf("st: src=%zu, size=5, dest=%s\n",strlcpy(dst, "hello", 5), dst);
// 	printf("st: src=%zu, size=7, dest=%s\n",strlcpy(dst, "hello", 7), dst);
// 	return (0);
// }

//#include "libft.h"
//len_src use former functions created in the lib
//Scope of Function Parameters can only be limited with in the scope
//Note that a byte for the NUL should be included in size.
