/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wehan <wehan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 20:35:17 by wehan             #+#    #+#             */
/*   Updated: 2025/11/07 19:26:04 by wehan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putpointer(void *p, int *count)
{
	unsigned long	address;

	if (*count == -1)
		return ;
	if (!p)
	{
		ft_putstr("(nil)", count);
		return ;
	}
	ft_putstr("0x", count);
	if (*count == -1)
		return ;
	address = (unsigned long)p;
	ft_puthexlower(address, count);
}

// else if (format[*i + 1] == 'p')
// 	ft_putpointer(va_arg(args, void *), count);
//check the format of address, optional 0x+hexlower;
//unsigned int may lose data in 64 system. 
// e.g. 
// 指针值:   0x123456789abcdef0
// unsigned int: 0x9abcdef0          # 被截断了！
// unsigned long: 0x123456789abcdef0 # 完整地址
// sizeof(void*): 8
// sizeof(unsigned int): 4
// sizeof(unsigned long): 8