/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wehan <wehan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 21:25:44 by wehan             #+#    #+#             */
/*   Updated: 2025/11/06 21:35:25 by wehan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "libft/libft.h"
# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
void	ft_putnbr(int n, int *count);
void	ft_putunsignedint(unsigned int n, int *count);
void	ft_puthexlower(unsigned long n, int *count);
void	ft_puthexupper(unsigned long n, int *count);
void	ft_putchar(int c, int *count);
void	ft_putstr(const char *str, int *count);
void	ft_putpointer(void *p, int *count);

#endif
