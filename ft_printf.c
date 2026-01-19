/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wehan <wehan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 16:39:12 by wehan             #+#    #+#             */
/*   Updated: 2025/11/07 19:34:55 by wehan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_format(const char *format, int *i, va_list args, int *count)
{
	if (format[*i + 1] == 'c')
		ft_putchar(va_arg(args, int), count);
	else if (format[*i + 1] == 'd' || format[*i + 1] == 'i')
		ft_putnbr(va_arg(args, int), count);
	else if (format[*i + 1] == 'u')
		ft_putunsignedint(va_arg(args, unsigned int), count);
	else if (format[*i + 1] == 's')
		ft_putstr(va_arg(args, const char *), count);
	else if (format[*i + 1] == 'x')
		ft_puthexlower(va_arg(args, unsigned int), count);
	else if (format[*i + 1] == 'X')
		ft_puthexupper(va_arg(args, unsigned int), count);
	else if (format[*i + 1] == 'p')
		ft_putpointer(va_arg(args, void *), count);
	else
		ft_putchar(format[*i], count);
	*i += 2;
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;
	int		i;

	if (!format)
		return (-1);
	va_start(args, format);
	i = 0;
	count = 0;
	while (format[i])
	{
		if (format[i] == '%')
			ft_format(format, &i, args, &count);
		else
			ft_putchar(format[i++], &count);
	}
	va_end(args);
	return (count);
}
