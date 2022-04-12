/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdehne <tdehne@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 18:31:28 by tdehne            #+#    #+#             */
/*   Updated: 2022/04/12 18:36:15 by tdehne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	log_10(int num)
{
	int		counter;

	counter = 0;
	num /= 10;
	while (num != 0)
	{
		num /= 10;
		counter += 1;
	}
	return (counter);
}

static int	pow_of(int base, int exp)
{
	int		result;

	result = 1;
	while (exp > 0)
	{
		result *= base;
		exp -= 1;
	}
	return (result);
}

void	ft_putnbr_fd(int n, int fd)
{
	int		digit;
	int		exp;
	int		counter;
	long	num_long;

	num_long = (long) n;
	counter = 0;
	exp = log_10(num_long);
	while (counter <= exp)
	{
		if (num_long < 0)
		{
			num_long = -num_long;
			write(fd, "-", 1);
		}
		digit = ((num_long / pow_of(10, exp - counter)) % 10) + 48;
		write(fd, &digit, 1);
		counter += 1;
	}
}
