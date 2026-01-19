/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsignedint.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wehan <wehan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 20:31:06 by wehan             #+#    #+#             */
/*   Updated: 2025/11/06 20:34:06 by wehan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunsignedint(unsigned int n, int *count)
{
	if (*count == -1)
		return ;
	if (n > 9)
	{
		ft_putunsignedint(n / 10, count);
		if (*count == -1)
			return ;
	}
	ft_putchar(n % 10 + '0', count);
}
