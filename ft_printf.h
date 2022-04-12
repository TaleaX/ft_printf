/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdehne <tdehne@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 16:56:38 by tdehne            #+#    #+#             */
/*   Updated: 2022/04/12 18:36:00 by tdehne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

void	ft_putnbr_fd(int n, int fd);
void	ft_process_arg(char c, va_list arg);
void	write_c(char c, va_list arg);
void	write_i(va_list arg);
int		ft_printf(const char *str, ...);

#endif