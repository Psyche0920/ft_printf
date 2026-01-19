/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wehan <wehan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 15:17:27 by wehan             #+#    #+#             */
/*   Updated: 2025/10/20 19:05:44 by wehan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (*s)
	{
		len++;
		s++;
	}
	return (len);
}

// int	main(void)
// {
// 	printf("strlen:%zu\n", strlen("AB@_ "));
// 	printf("ft_strlen:%zu\n", ft_strlen("AB@_ "));
// 	return (0);	
// }

//32     unsinged int  %u
//64     unsigned long %lu
//anysys size_t        %zu
