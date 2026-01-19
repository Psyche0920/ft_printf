/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wehan <wehan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 09:43:21 by wehan             #+#    #+#             */
/*   Updated: 2025/10/20 19:01:29 by wehan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	i;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	p = (char *)malloc(sizeof(char) * (len + 1));
	if (p == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		p[i] = s[start + i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

// int main()
// {
// 	char	*p1, *p2, *p3;

// 	p1 = ft_substr("hello", 3, 1);
// 	printf("str=hello, start=3, len=1(len < actual_len), substr=%s\n", p1);
// 	free(p1);
// 	p1 = NULL;
// 	p2 = ft_substr("hello", 3, 3);
// 	printf("str=hello, start=3, len=3(len > actual_len), substr=%s\n", p2);
// 	free(p2);
// 	p2 = NULL;
// 	p3 = ft_substr("", 3, 1);
// 	printf("str= , start=3, len=1(len < actual_len), substr=%s\n", p3);
// 	free(p3);
//         p3 = NULL;
// 	return (0);
// }
