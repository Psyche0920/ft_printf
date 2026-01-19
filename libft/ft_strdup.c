/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wehan <wehan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 16:54:06 by wehan             #+#    #+#             */
/*   Updated: 2025/10/23 16:08:52 by wehan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdlib.h>
//#include <stdio.h>
//#include <string.h>

char	*ft_strdup(const char *s)
{
	char	*p;
	size_t	size;

	size = ft_strlen(s) + 1;
	p = (char *)malloc(size);
	if (p == NULL)
		return (NULL);
	ft_memcpy(p, s, size);
	return (p);
}

// int main()
// {
// 	char *ret1 = ft_strdup("abc");
// 	char *ret2 = strdup("abc");
// 	printf("ft_strdup=%s\n", ret1);
// 	printf("strdup=%s\n", ret2);
// 	free(ret1);
// 	free(ret2);
// 	ret1 = NULL;
// 	ret2 = NULL;
// 	return (0);
// }
// //strlcpy \0 should be included in size but memcpy 
/////is better because it does not check \0
// //ft should be included
