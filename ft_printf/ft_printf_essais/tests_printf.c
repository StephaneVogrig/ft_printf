/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_printf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephane <stephane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 16:56:48 by svogrig           #+#    #+#             */
/*   Updated: 2024/01/06 18:11:57 by stephane         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <stdio.h>
#include <limits.h>
#include <unistd.h>

int	main(void)
{
	int	n = 42;
	int size_print;


	close(1);
	size_print = printf("bonjour");
	size_print = write(1, "erreur par std erreur", 15);
	/*
	stud_d();

	printf("n = 42 --------------------------------------------\n");
	printf("printf(%%i, n)   = \""); printf ("\" : %i\n", printf("%i", n));
	printf("printf(%%-i, n)  = \""); printf ("\" : %i\n", printf("%-i", n));
	printf("printf(%%0i, n)  = \""); printf ("\" : %i\n", printf("%0i", n));
	printf("printf(%%.i, n) = "); printf("%.i| ", n);printf("\n");
	printf("printf(%%#i, n) = "); printf("%#i| ", n);printf("\n");
	printf("printf(%% i, n) = "); printf("% i| ", n);printf("\n");
	printf("printf(%%+i, n) = "); printf("%+i| ", n);printf("\n");
	printf("\n");
	printf("printf(%%10i, n)  = \""); printf ("\" : %i\n", printf("%10i", n));
	printf("printf(%%-10i, n) = \""); printf ("\" : %i\n", printf("%-10i", n));
	printf("printf(%%010i, n) = \""); printf ("\" : %i\n", printf("%010i", n));
	printf("printf(%%10.i, n) = "); printf("%10.i| ", n);printf("\n");
	printf("printf(%%#10i, n) = "); printf("%#10i| ", n);printf("\n");
	printf("printf(%% 10i, n) = "); printf("% 10i| ", n);printf("\n");
	printf("printf(%%+10i, n) = "); printf("%+10i| ", n);printf("\n");
	printf("\n");
	printf("printf(%%10-i, n) = "); printf("%10-i| ", n);printf("\n");
	printf("printf(%%.10i, n) = "); printf("%.10i| ", n);printf("\n");
	printf("printf(%%10#i, n) = "); printf("%10#i| ", n);printf("\n");
	printf("printf(%%10 i, n) = "); printf("%10 i| ", n);printf("\n");
	printf("printf(%%10+i, n) = "); printf("%10+i| ", n);printf("\n");
	printf("\n");
	
	printf("printf(%%i)   = \""); printf ("\" : %i\n", printf("%i"));
	int m = 42;
	printf("printf(%%i)   = \""); printf ("\" : %i\n", printf("%i", n, m));*/
/*
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
	printf("int -42 = %+- #- -0--+ 0000+#+#000 0000---5.4ii----     000000   .12---++++++++++--++++++++++5i          i\n", n);
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
}
