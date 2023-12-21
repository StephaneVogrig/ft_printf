/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_VA_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 20:40:30 by svogrig           #+#    #+#             */
/*   Updated: 2023/11/22 02:21:17 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>

void	foochar(va_list args)
{
	printf("\'%c\' | ", va_arg(args, char));
}

void	foostr(va_list args)
{
	printf("\"%s\" | ", va_arg(args, char*));
}

void	fooint(va_list args)
{
	printf("%d | ", va_arg(args, int));
}

void	foofoo(char *types, ...)
{
	va_list	args;

	printf("essai foofoo : | ");
	va_start(args, types);
	while(*types)
	{
		if(*types == 'i')
			fooint(args);
		else if(*types == 's')
			foostr(args);
		else if(*types == 'c')
			foochar(args);
		types++;
	}
	printf("\n");

	va_end(args);	
}

void foo(char *types, ...)
{
	va_list	args;

	printf("essai foo : | ");
	va_start(args, types);
	while(*types)
	{
		printf("%d | ", va_arg(args, int));
		types++;
	}
	va_end(args);
	printf("\n");
}
int main(void)
{
	foo("iii", 1, 2, 3);
	foofoo("isc", 1, "bonjour", 'A');
	return (0);
}