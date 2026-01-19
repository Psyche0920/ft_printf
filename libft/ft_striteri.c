/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wehan <wehan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 10:36:20 by wehan             #+#    #+#             */
/*   Updated: 2025/10/21 21:14:01 by wehan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
//
//static void	f(unsigned int c, char *p)
//{
//	if (c % 2 == 0)
//		*p = '*';
//}
//
// int	main(void)
// {
// 	char s[] = "abc";
// 	ft_striteri(s, f);
// 	printf("s=abc after s=%s", s);
// 	return (0);
// }
//f(i, &s[i]);     == (*f)(i, &s[i]);   != *f(i, &s[i]); 
//the last one means first use, then derefer
