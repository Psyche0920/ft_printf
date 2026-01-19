/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wehan <wehan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 12:20:14 by wehan             #+#    #+#             */
/*   Updated: 2025/10/20 19:09:24 by wehan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*p;

	if (!s1 || !s2)
		return (NULL);
	p = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (p == NULL)
		return (NULL);
	ft_memcpy(p, s1, ft_strlen(s1));
	ft_memcpy(p + ft_strlen(s1), s2, ft_strlen(s2) + 1);
	return (p);
}
//
//#include <stdio.h>
//
// int	main(void)
// {
// 	char	*p;

// 	p = ft_strjoin("abc", "123");
// 	printf("s1=abc, s2=123, strjoin=%s", p);
// 	free (p);
// 	p = NULL;
// 	return(0);
// }

// //strlcpy guarantee \0 is included 
////in size===ft_strlcpy(p, s1, ft_strlen(s1)+1); then 1-\0 will be overlapped
// //memcpy does not guarantee \0
