/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wehan <wehan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 18:43:13 by wehan             #+#    #+#             */
/*   Updated: 2025/10/20 19:10:07 by wehan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#inclde "string.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}

// int	main(void)
// {
// 	printf("s=abc, c=b, return=%s\n", ft_strchr("abc", 'b'));
// 	printf("s=abc, c='0', return=%s\n", ft_strchr("abc", '\0'));
//	printf("s=abc, c='0', return=%s\n", strchr("abc", '\0'));
// 	printf("s=abc, c=d, return=%s\n", ft_strchr("abc", 'd'));
// 	return (0);
// }
