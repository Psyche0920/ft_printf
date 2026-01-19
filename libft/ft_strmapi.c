/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wehan <wehan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 13:01:44 by wehan             #+#    #+#             */
/*   Updated: 2025/10/21 11:07:35 by wehan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*p;
	size_t	len;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	p = (char *)malloc(sizeof(char) * (len + 1));
	if (!p)
		return (NULL);
	i = 0;
	while (s[i])
	{
		p[i] = f(i, s[i]);
		i++;
	}
	p[i] = '\0';
	return (p);
}
//
//char	f(unsigned int n, char c)
//{
//	if (n % 2 == 0)
//		c = '*';
//	return (c);
//}
//
// int	main(void)
// {
// 	char *s = "abc";
// 	char *p = ft_strmapi(s, f);
// 	printf("s=abc after s=%s", p);
// 	free (p);
// 	p = NULL;
// 	return (0);
// }
