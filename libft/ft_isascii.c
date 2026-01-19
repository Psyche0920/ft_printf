/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wehan <wehan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 14:41:40 by wehan             #+#    #+#             */
/*   Updated: 2025/10/20 19:24:53 by wehan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (0 <= c && c <= 127)
		return (1);
	return (0);
}

// #include <stdio.h>
// #include <ctype.h>
// int	main (void)
// {
// 	printf("isascii(' '), %d\n", isascii(' '));
// 	printf("ft_isascii(' '), %d\n", ft_isascii(' '));
// 	printf("isascii(128), %d\n", isascii(128));
//         printf("ft_isascii(128), %d\n", ft_isascii(128));
// 	return (0);
// }
