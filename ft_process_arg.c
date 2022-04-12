/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_process_arg.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdehne <tdehne@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 17:02:55 by tdehne            #+#    #+#             */
/*   Updated: 2022/04/12 18:36:47 by tdehne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

static void	write_i(va_list arg)
{
	int	i;

	i = va_arg(arg, int);
	ft_putnbr_fd(i, 1);
}

static void	write_c(char c, va_list arg)
{
	c = (char)va_arg(arg, int);
	write(1, &c, 1);
}

void	ft_process_arg(char c, va_list arg)
{
	if (c == 'c')
		write_c(c, arg);
	/*if (c == 's')
		write_s(c, arg);*/
	if (c == 'i' || c == 'd')
		write_i(arg);
	/*if (c == 'u')
		write_u(c, arg);
	if (c == 'p')
		write_p(c, arg);
	if (c == 'x')
		write_x(c, arg);
	if (c == 'X')
		write_X(c, arg);
	if (c == '%')
		write(1, &c, 1);*/
}
