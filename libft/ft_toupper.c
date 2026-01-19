/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wehan <wehan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 17:30:16 by wehan             #+#    #+#             */
/*   Updated: 2025/10/18 11:34:55 by wehan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if ('a' <= c && c <= 'z')
		c = c - 32;
	return (c);
}

// int	main(void)
// {
// 	printf("c=%c\n", ft_toupper('c'));
// 	printf("C=%c\n", ft_toupper('C'));
// 	printf(" =%c\n", ft_toupper(' '));
// 	printf("1=%c\n", ft_toupper('1'));
// 	return (0);
// }