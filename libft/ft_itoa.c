/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wehan <wehan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 20:20:21 by wehan             #+#    #+#             */
/*   Updated: 2025/10/21 19:08:16 by wehan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>
#include "libft.h"

static size_t	ft_len(int n)
{
	long	nbr;
	size_t	len;

	nbr = n;
	len = 1;
	if (nbr < 0)
	{
		len++;
		nbr = -nbr;
	}
	while (nbr > 9)
	{
		nbr = (nbr / 10);
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*p;
	long	nbr;
	size_t	len;

	nbr = n;
	len = ft_len(n);
	p = (char *)malloc(sizeof(char) * (len + 1));
	if (!p)
		return (NULL);
	p[len] = '\0';
	if (nbr == 0)
		return (p[0] = '0', p);
	if (nbr < 0)
	{
		p[0] = '-';
		nbr = -nbr;
	}
	while (nbr > 0)
	{
		p[len - 1] = nbr % 10 + '0';
		nbr = nbr / 10;
		(len)--;
	}
	return (p);
}
// 
// int	main(void)
// {
// 	char *p = ft_itoa(123);
// 	printf("%s", p);
// 	free(p);
// 	p = NULL;
// 	return (0);
// }
