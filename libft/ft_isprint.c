/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wehan <wehan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 14:56:31 by wehan             #+#    #+#             */
/*   Updated: 2025/10/20 19:23:20 by wehan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (32 <= c && c <= 126)
		return (1);
	return (0);
}
// 
// #include <stdio.h>
// #include <ctype.h>
// int	main(void)
// {
// 	printf ("isprint(' '), %d\n", isprint(' '));
// 	printf ("ft_print(' '), %d\n", ft_isprint(' '));
// 	printf ("isprint(127), %d\n", isprint(127));
//         printf ("ft_isprint(127), %d\n", ft_isprint(127));
// 	return (0);
// }
