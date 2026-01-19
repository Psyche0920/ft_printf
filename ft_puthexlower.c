/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexlower.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wehan <wehan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 20:03:58 by wehan             #+#    #+#             */
/*   Updated: 2025/11/06 20:24:47 by wehan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthexlower(unsigned long n, int *count)
{
	if (*count == -1)
		return ;
	if (n > 15)
	{
		ft_puthexlower(n / 16, count);
		if (*count == -1)
			return ;
	}
	if (n % 16 < 10)
		ft_putchar(n % 16 + '0', count);
	else
		ft_putchar(n % 16 - 10 + 'a', count);
}
// else if (format[*i + 1] == 'x')
// 		ft_puthexlower(va_arg(args, unsigned int), count);
