/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wehan <wehan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 19:44:31 by wehan             #+#    #+#             */
/*   Updated: 2025/11/06 21:34:17 by wehan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(const char *str, int *count)
{
	if (*count == -1)
		return ;
	if (!str)
		str = "(null)";
	while (*str)
	{
		ft_putchar(*str, count);
		if (*count == -1)
			return ;
		str++;
	}
}
