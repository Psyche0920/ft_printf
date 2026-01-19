/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wehan <wehan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 18:29:51 by wehan             #+#    #+#             */
/*   Updated: 2025/10/20 19:00:11 by wehan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int	ft_tolower(int c)
{
	if ('A' <= c && c <= 'Z')
		c = c + 32;
	return (c);
}

// int	main(void)
// {
// 	printf("c=%c\n", ft_tolower('c'));
// 	printf("C=%c\n", ft_tolower('C'));
// 	printf(" =%c\n", ft_tolower(' '));
// 	printf("1=%c\n", ft_tolower('1'));
// 	return (0);
// }
