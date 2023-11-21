/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_printf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 16:56:48 by svogrig           #+#    #+#             */
/*   Updated: 2023/11/18 19:21:39 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	n = 42;

	printf("int 42 = %0i\n", n);

	printf("int 42 = %10i\n", n);
	printf("int 42 = %010i\n", n);
	printf("int 42 = % 10i\n", n);
	printf("int 42 = %+10i\n", n);
	printf("int 42 = %+.5i\n", n);
	printf("int 42 = %+i\n", n);
	printf("int 42 = % i\n", n);
	printf("int 42 = %+0.5i\n", n);

	n = -42;
	printf("int -42 = %10i\n", n);
	printf("int -42 = %010i\n", n);
	printf("int -42 = % 10i\n", n);
	printf("int -42 = %+10i\n", n);
	printf("int -42 = %+.5i\n", n);
	printf("int -42 = %+i\n", n);
	printf("int -42 = % i\n", n);
	printf("int -42 = %+0.5i\n", n);

 //erreur compilation
	printf("warning compilation\n");
	n = 42;
	printf("int 42 = %+ .5i\n", n);
	n = -42;
	printf("int -42 = %+ .5i\n", n);
	printf("i = %-0i\n", n);
	printf("bonjour %\n");
	printf("ecole %y\n");
	printf("monde %s\n", (char *)&n);
	printf("\n");
	printf("bonjour %\n");
	printf("\n");
	n = -42;

	printf("int -42 = %+- #- -0--+ 0000+#+#000 0000---5.4 ii----     000000   .12---++++++++++--++++++++++5i          i\n", n);
	/*printf("int -42 = %+- #- -0--+ 0000+#+#000 0000---5.4ii----     000000   .12---++++++++++--++++++++++5i          i\n", n);
	printf("int -42 = %0000000000000   +       ###############10i", n);

	printf("\n");
	char	*s = NULL;
	printf("int -42 = %s%d%i%u%X0000000000000   +       ###############10i", s, s);

	printf("essais 'c'\n");
	printf("'c' = %c\n", 'c');
	printf("'F' = %c\n", 70);
	n = 70;
	printf("'F' = %c\n", n);
	printf("'G' = %#######000000+++++++10c\n", n + 1);
	*/
/*
*/
}
