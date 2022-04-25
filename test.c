/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdehne <tdehne@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 17:18:21 by tdehne            #+#    #+#             */
/*   Updated: 2022/04/21 14:22:18 by tdehne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	char		*c;
	int		ret;
	int		*i;
	double		*d;
	unsigned int 	ui;

	ui = 4294967295;
	c = (char *)malloc(sizeof(char) * 1);
	i = (int *)malloc(sizeof(int) * 1);
	d = (double *)malloc(sizeof(double) * 1);
	//testing for integers
	ret = printf("dec = %i, dec = %i, hex = %i, oct = %i\n",2147483647, -2147483647, 0xA4, 010);
	printf("ret i = %d\n", ret);
	ret = ft_printf("dec = %i, dec = %i, hex = %i, oct = %i\n",2147483647, -2147483647, 0xA4, 010);
	printf("ret i = %d\n", ret);

	//testing for chars
	ret = printf("char = %c, zahl = %c\n", 'a', 78);
	printf("ret c = %d\n", ret);
	ret = ft_printf("char = %c, zahl = %c\n", 'a', 78);
	printf("ret c = %d\n", ret);

	//testing for decimals
	ret = printf("dec = %d, dec = %d, hex = %d, oct = %d\n",2147483647, -2147483647, 0xA4, 010);
	printf("ret dec = %d\n", ret);
	ret = ft_printf("dec = %d, dec = %d, hex = %d, oct = %d\n",2147483647, -2147483647, 0xA4, 010);
	printf("ret dec = %d\n", ret);

	//testing for string
	ret = printf("hello = %s, empty = %s, yay = %s\n", "Hello", "\0hello", "Yay");
	printf("ret str = %d\n", ret);
	ret = ft_printf("hello = %s, empty = %s, yay = %s\n", "Hello", "\0hello", "Yay");
	printf("ret str = %d\n", ret);

	//testing for pointers
	ret = printf("char * = %p, int * = %p, double * = %p, null = %p\n", c, i, d, NULL);
	printf("ret ptr = %d\n", ret);
	ret = ft_printf("char * = %p, int * = %p, double * = %p, null = %p\n", c, i, d, NULL);
	printf("ret ptr = %d\n", ret);

	//testing for unsigned decimal
	ret = printf("udec = %u, uhex = %u, uoct = %u, minus = %u\n",ui, 0xA4, 010, -1);
	printf("ret ui = %d\n", ret);
	ret = ft_printf("udec = %u, uhex = %u, uoct = %u, minus = %u\n",ui, 0xA4, 010, -1);
	printf("ret ui = %d\n", ret);
	
	//testing for hexadecimals lowercase
	ret = printf("hdec = %x, hhex = %x, hoct = %x, hminus = %x\n",2147483647, 0xA4, 012, -11);
	printf("ret hex = %d\n", ret);
	ret = ft_printf("hdec = %x, hhex = %x, hoct = %x, hminus = %x\n",2147483647, 0xA4, 012, -11);
	printf("ret hex = %d\n", ret);

	//testing for hexadecimals uppercase
	ret = printf("dec = %X, hex = %X, oct = %X, minus = %X, greatest ui = %X, greatest ui + 1 = %X\n",2147483647, 0xA4, 012, 2, ui, ui + 1);
	printf("ret hex = %d\n", ret);
	ret = ft_printf("dec = %X, hex = %X, oct = %X, minus = %X, greatest ui = %X, greatest ui + 1 = %X\n",2147483647, 0xA4, 012, 2, ui, ui + 1);
	printf("ret hex = %d\n", ret);

	ret = printf("LOL");
	printf("ret empty = %d\n", ret);
	ret = ft_printf("LOL");
	printf("ret empty = %d\n", ret);
	return (0);
}
