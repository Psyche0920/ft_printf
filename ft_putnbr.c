/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wehan <wehan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 19:47:06 by wehan             #+#    #+#             */
/*   Updated: 2025/11/06 20:29:33 by wehan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n, int *count)
{
	long	nbr;

	if (*count == -1)
		return ;
	nbr = n;
	if (nbr < 0)
	{
		ft_putchar('-', count);
		if (*count == -1)
			return ;
		nbr = -nbr;
	}
	if (nbr > 9)
	{
		ft_putnbr(nbr / 10, count);
		if (*count == -1)
			return ;
	}
	ft_putchar(nbr % 10 + '0', count);
}
