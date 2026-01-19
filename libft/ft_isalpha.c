/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wehan <wehan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 14:00:41 by wehan             #+#    #+#             */
/*   Updated: 2025/10/18 11:34:31 by wehan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))
		return (1);
	return (0);
}

// #include <stdio.h>
// #include <ctype.h>
// int	main(void)
// {
// 	printf ("isalpha('a'): %d\n", isalpha('a'));
// 	printf ("ft_isalpha('a'), %d\n", ft_isalpha('a'));
// 	printf ("isalpha('2'): %d\n", isalpha('2'));
// 	printf ("ft_isalpha('2'), %d\n", ft_isalpha('2'));
// 	return (0);
// }
