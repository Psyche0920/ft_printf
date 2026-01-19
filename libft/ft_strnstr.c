/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wehan <wehan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 20:32:17 by wehan             #+#    #+#             */
/*   Updated: 2025/10/20 19:03:53 by wehan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (little[0] == '\0')
		return ((char *)big);
	i = 0;
	while (big[i] && i < len)
	{
		j = 0;
		if (little[j] == big[i])
		{
			while (little[j] == big[j + i]
				&& little[j] && big[j + i] && i + j < len)
				j++;
			if (little[j] == '\0')
				return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char *big = "Foo Bar Baz";
// 	char *small = "Bar";
// 	printf("ft_strnstr(Foo Bar Baz, Bar, 4)=%s\n", ft_strnstr(big, small, 4));
// 	printf("ft_strnstr(Foo Bar Baz, Bar, 8)=%s\n", ft_strnstr(big, small, 8));
// 	printf("ft_strnstr(Foo Bar Baz, Bar, 7)=%s\n", ft_strnstr(big, small, 7));
// 	return (0);
// }
