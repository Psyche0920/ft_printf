/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wehan <wehan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 14:16:47 by wehan             #+#    #+#             */
/*   Updated: 2025/10/20 19:24:44 by wehan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if ('0' <= c && c <= '9')
		return (1);
	return (0);
}

// #include <stdio.h>
// #include <ctype.h>
// int	main(void)
// {
// 	printf ("isdigit('a'), %d\n", isdigit('a'));
// 	printf ("ft_isdigit('a'), %d\n", ft_isdigit('a'));
// 	printf ("isdigit('0'), %d\n", isdigit('0'));
//         printf ("ft_isdigit('0'), %d\n", ft_isdigit('0'));
// 	return (0);
// }
