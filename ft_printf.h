/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdehne <tdehne@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 16:56:38 by tdehne            #+#    #+#             */
/*   Updated: 2022/04/25 13:44:56 by tdehne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdint.h>
# include "libft/libft.h"
int		putuint_fd(unsigned int n, int fd);
int		ft_printf(const char *str, ...);
int		putnbr_count(int n);
int		write_xX(va_list arg, char *base);
int		write_p(va_list arg, char *base);
void	write_hex(unsigned long long num, char *base, int *counter);
int		write_u(va_list arg);
int		write_s(va_list arg);
int		write_i(va_list arg);
int		write_c_i(va_list arg, char c);
int	putnbr_count(int n);

#endif