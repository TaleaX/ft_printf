/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_arg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdehne <tdehne@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 17:02:55 by tdehne            #+#    #+#             */
/*   Updated: 2022/04/25 13:45:46 by tdehne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

/*int	write_i(va_list arg)
{
	int	i;

	i = va_arg(arg, int);
	return (putnbr_count(i));
}*/

int write_c_i(va_list arg, char c)
{
	int	i;

	i = va_arg(arg, int);
	if (c == 'c')
	{
		c = (char) i;
		return (write(1, &c, 1));
	}
	return (putnbr_count(i));
}

int	write_s(va_list arg)
{
	char	*str;

	str = va_arg(arg, char *);
	return (write(1, str, ft_strlen(str)));
}

int	write_u(va_list arg)
{
	unsigned int ui;

	ui = va_arg(arg, unsigned int);
	return (putuint_fd(ui, 1));
}

int	write_p(va_list arg, char *base)
{
	uintptr_t	ptr;
	int			counter;

	ptr = va_arg(arg, uintptr_t);
	if (!ptr)
	{
		return(write(1, "(nil)", 5));
	}
	counter = 0;
	write(1, "0x", 2);
	write_hex(ptr, base, &counter);
	return (counter + 2);
}

int write_xX(va_list arg, char *base)
{
	unsigned int	num;
	int				counter;

	num = va_arg(arg, unsigned int);
	if (num == 0)
		return (write(1, "0", 1));
	counter = 0;
	write_hex(num, base, &counter);
	return (counter);
}
