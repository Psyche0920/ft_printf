/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wehan <wehan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 12:06:36 by wehan             #+#    #+#             */
/*   Updated: 2025/10/20 19:02:04 by wehan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*cur;

	cur = (char *)s;
	while (*s)
		s++;
	if ((char) c == '\0')
		return ((char *)s);
	while ((char *)s >= cur)
	{
		if (*s == (char)c)
			return ((char *)s);
		s--;
	}
	return (NULL);
}

// int	main(void)
// {
// 	printf("s=babc, c=b, return=%s\n", ft_strrchr("babc", 'b'));
// 	printf("s=a, c=a, return=%s\n", ft_strrchr("a", 'a'));
// 	printf("s=abc, c='0', return=%s\n", ft_strrchr("abc", '\0'));
// 	printf("s=abc, c=d, return=%s\n", ft_strrchr("abc", 'd'));
// 	return (0);
// }
