/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wehan <wehan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 14:27:29 by wehan             #+#    #+#             */
/*   Updated: 2025/10/20 19:26:43 by wehan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z')
		|| ('0' <= c && c <= '9'))
		return (1);
	return (0);
}

// #include <stdio.h>
// #include <ctype.h>
// int	main(void)
// {
// 	printf("isalnum('a'): %d\n", isalnum('a'));
// 	printf("ft_isalnum('a'): %d\n", ft_isalnum('a'));
// 	printf("isalnum('0'): %d\n", isalnum('0'));
//         printf("ft_isalnum('0'): %d\n", ft_isalnum('0'));
// 	printf("isalnum(' '): %d\n", isalnum(' '));
//         printf("ft_isalnum(' '): %d\n", ft_isalnum(' '));

// 	return(0);
// }
