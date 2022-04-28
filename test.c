/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdehne <tdehne@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 17:18:21 by tdehne            #+#    #+#             */
/*   Updated: 2022/04/28 16:45:51 by tdehne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	char			*c;
	int				ret;
	int				*i;
	double			*d;
	unsigned int 	ui;
	int				l;
	int				num;

	ui = 4294967295;
	c = (char *)malloc(sizeof(char) * 1);
	i = (int *)malloc(sizeof(int) * 1);
	d = (double *)malloc(sizeof(double) * 1);
	l = 2147483647;
	num = 2147483647;
	
	printf("Legende:\ngI = greatest Integer\nsI = smallest INteger\nA = Ascii\neA = extended Ascii\n\n");
	//TESTING FOR integers
	printf("\nTESTING FOR integers\n");
	ret = printf("gI = %i, sI = %i, H = %i, O = %i, IOverflow = %i, 0 = %i, -0 = %i l \n", 2147483647, -2147483647, 0xA4, 010, l + 1, -0, 0);
	printf("ret i = %d\n", ret);
	ret = ft_printf("gI = %i, sI = %i, H = %i, O = %i, IOverflow = %i, 0 = %i, -0 = %i l \n", 2147483647, -2147483647, 0xA4, 010, l + 1, -0, 0);
	printf("ret i = %d\n", ret);

	printf("\nTESTING FOR decimals\n");
	//TESTING FOR decimals
	ret = printf("gI = %d, sI = %d, H = %d, O = %d, IOverflow = %d, 0 = %d, -0 = %d l\n", 2147483647, -2147483647, 0xA4, 010, l + 1, -0, 0);
	printf("ret dec = %d\n", ret);
	ret = ft_printf("gI = %d, sI = %d, H = %d, O = %d, IOverflow = %d, 0 = %d, -0 = %d l\n", 2147483647, -2147483647, 0xA4, 010, l + 1, -0, 0);
	printf("ret dec = %d\n", ret);

	//TESTING FOR chars
	printf("\nTESTING FOR chars\n");
	ret = printf("char = %c, A = %c, eA = %c, eAOverflow = %c, 0 = %c, -0 = %c\n", 'a', 78, 254, 258, 0, -0);
	printf("ret c = %d\n", ret);
	ret = ft_printf("char = %c, A = %c, eA = %c, eAOverflow = %c, 0 = %c, -0 = %c\n", 'a', 78, 254, 258, 0, -0);
	printf("ret c = %d\n", ret);

	//TESTING FOR string
	printf("\nTESTING FOR strings\n");
	ret = printf("Hello = %s, empty = %s, Yay = %s, NULL = %s\n", "Hello", "\0hello", "Yay", NULL);
	printf("ret str = %d\n", ret);
	ret = ft_printf("Hello = %s, empty = %s, Yay = %s, NULL = %s\n", "Hello", "\0hello", "Yay", NULL);
	printf("ret str = %d\n", ret);

	//TESTING FOR pointers
	printf("\nTESTING FOR pointers\n");
	ret = printf("char * = %p, int * = %p, double * = %p, null = %p\n", c, i, d, NULL);
	printf("ret ptr = %d\n", ret);
	ret = ft_printf("char * = %p, int * = %p, double * = %p, null = %p\n", c, i, d, NULL);
	printf("ret ptr = %d\n", ret);

	//TESTING FOR unsigned decimal
	printf("\nTESTING FOR unsigned decimals\n");
	ret = printf("udec = %u, uhex = %u, uoct = %u, minus = %u, 0 = %u, -0 = %u\n",ui, 0xA4, 010, -1, 0, -0);
	printf("ret ui = %d\n", ret);
	ret = ft_printf("udec = %u, uhex = %u, uoct = %u, minus = %u, 0 = %u, -0 = %u\n",ui, 0xA4, 010, -1, 0, -0);
	printf("ret ui = %d\n", ret);
	
	//TESTING FOR hexadecimals lowercase
	printf("\nTESTING FOR hexadecimals lowercase\n");
	ret = printf("hdec = %x, hhex = %x, hoct = %x, hminus = %x\n",2147483647, 0xA4, 012, -11);
	printf("ret hex = %d\n", ret);
	ret = ft_printf("hdec = %x, hhex = %x, hoct = %x, hminus = %x\n",2147483647, 0xA4, 012, -11);
	printf("ret hex = %d\n", ret);

	//TESTING FOR hexadecimals uppercase
	printf("\nTESTING FOR hexadecimals uppercase\n");
	ret = printf("dec = %X, hex = %X, oct = %X, minus = %X, greatest ui = %X, greatest ui + 1 = %X\n",2147483647, 0xA4, 012, 2, ui, ui + 1);
	printf("ret hex = %d\n", ret);
	ret = ft_printf("dec = %X, hex = %X, oct = %X, minus = %X, greatest ui = %X, greatest ui + 1 = %X\n",2147483647, 0xA4, 012, 2, ui, ui + 1);
	printf("ret hex = %d\n", ret);

	//testing for multiple different args
	printf("\nTESTING FOR multiple\n");
	printf("\nTESTING FOR multiple\n");
	printf("\nTESTING FOR multiple\n");
	printf("\nTESTING FOR multiple\n");
	printf("\nTESTING FOR multiple\n");
	ret = printf("dec = %d, ptr = %p, hex up = %X, hex = %x, str = %s, char = %c\n",2147483647, d, 012, 2, "yay", 'c');
	printf("ret hex = %d\n", ret);
	ret = ft_printf("dec = %d, ptr = %p, hex up = %X, hex = %x, str = %s, char = %c\n",2147483647, d, 012, 2, "yay", 'c');
	printf("ret hex = %d\n", ret);
	ret = printf("Mix:%d%p%X%x%s%c\n",2147483647, d, 012, 2, "yay", 'c');
	printf("ret hex = %d\n", ret);
	ret = ft_printf("Mix:%d%p%X%x%s%c\n",2147483647, d, 012, 2, "yay", 'c');
	printf("ret hex = %d\n", ret);

	ret = printf(" ");
	printf("ret empty str = %d\n", ret);
	ret = ft_printf(" ");
	printf("ret empty str = %d\n", ret);

	ret = printf("Nur ein String%%\n");
	printf("ret nur str = %d\n", ret);
	ret = ft_printf("Nur ein String%%\n");
	printf("ret nur str = %d\n", ret);

	ret = printf("%x\n", 012);
	printf("ret hex = %d\n", ret);
	ret = ft_printf("%x\n", 012);
	printf("ret hex = %d\n", ret);
	return (0);
}
