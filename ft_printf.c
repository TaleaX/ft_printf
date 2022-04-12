/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdehne <tdehne@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 16:31:10 by tdehne            #+#    #+#             */
/*   Updated: 2022/04/12 18:26:03 by tdehne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	argptr;

	va_start(argptr, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			if (!*str)
				break ;
			ft_process_arg(*str, argptr);
		}
		else
			write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
	va_end(argptr);
	return (0);
}
