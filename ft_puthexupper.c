/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexupper.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wehan <wehan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 20:23:58 by wehan             #+#    #+#             */
/*   Updated: 2025/11/06 21:35:48 by wehan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthexupper(unsigned long n, int *count)
{
	if (*count == -1)
		return ;
	if (n > 15)
	{
		ft_puthexupper(n / 16, count);
		if (*count == -1)
			return ;
	}
	if (n % 16 < 10)
		ft_putchar(n % 16 + '0', count);
	else
		ft_putchar(n % 16 - 10 + 'A', count);
}
//why unsigned long instead of int?