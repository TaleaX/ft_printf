/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdehne <tdehne@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 17:18:21 by tdehne            #+#    #+#             */
/*   Updated: 2022/04/12 17:41:24 by tdehne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	int		ret;
	char	*c;
	int		*i;
	double	*d;

	c = (char *)malloc(sizeof(char) * 1);
	i = (int *)malloc(sizeof(int) * 1);
	d = (int *)malloc(sizeof(int) * 1);
	//testing for chars
	ret = printf("dec = %i, dec = %i, hex = %i, oct = %i\n",2147483647, -2147483647, 0xA4, 010);
	ret = ft_printf("dec = %i, dec = %i, hex = %i, oct = %i\n",2147483647, 0xA4, 010);

	//testing for integers
	ret = printf("char = %c, zahl = %c\n", 'a', 78);
	ret = ft_printf("char = %c, zahl = %c\n", 'a', 78);

	//testing for decimals
	ret = printf("dec = %d, dec = %d, hex = %d, oct = %d\n",2147483647, -2147483647, 0xA4, 010);
	ret = ft_printf("dec = %d, dec = %d, hex = %d, oct = %d\n",2147483647, -2147483647, 0xA4, 010);

	//testing for string
	ret = printf("hello = %s, empty = %s, yay = %s\n", "Hello", "\0hello", "Yay");
	ret = ft_printf("hello = %s, empty = %s, yay = %s\n", "Hello", "\0hello", "Yay");

	//testing for pointers
	ret = printf("char * = %p, int * = %p, double * = %p, null = %p\n", c, i, d, NULL);
	ret = ft_printf("char * = %p, int * = %p, double * = %p, null = %p\n", c, i, d, NULL);

	//testing for unsigned decimal
	ret = printf("udec = %u, uhex = %u, uoct = %u, ?minus = %u\n",4294967295, 0xA4, 010, -1);
	ret = ft_printf("udec = %u, uhex = %u, uoct = %u, ?minus = %u\n",4294967295, 0xA4, 010, -1);

	//testing for hexadecimals lowercase
	ret = printf("dec = %x, hex = %x, oct = %x, minus = %x\n",2147483647, 0xA4, 012, -1);
	ret = ft_printf("dec = %x, hex = %x, oct = %x, minus = %x\n",2147483647, 0xA4, 012, -1);

	//testing for hexadecimals uppercase
	ret = printf("dec = %X, hex = %X, oct = %X, minus = %X\n",2147483647, 0xA4, 012, -1);
	ret = ft_printf("dec = %X, hex = %X, oct = %X, minus = %X\n",2147483647, 0xA4, 012, -1);
	return (0);
}