/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sizeof_show.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephane <stephane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 17:47:32 by stephane          #+#    #+#             */
/*   Updated: 2024/01/06 18:10:04 by stephane         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <stdio.h>

void	sizeof_show(void)
{
	printf("%20s : %-2lu\n", "sizeof char"				, sizeof(char));
	printf("%20s : %-2lu\n", "sizeof short"				, sizeof(short));
	printf("%20s : %-2lu\n", "sizeof int"				, sizeof(int));
	printf("%20s : %-2lu\n", "sizeof long"				, sizeof(long));
	printf("%20s : %-2lu\n", "sizeof long long"			, sizeof(long long));
	printf("\n");
	printf("%20s : %-2lu\n", "sizeof unsigned char"		, sizeof(char));
	printf("%20s : %-2lu\n", "sizeof unsigned short"	, sizeof(short));
	printf("%20s : %-2lu\n", "sizeof unsigned int"		, sizeof(int));
	printf("%20s : %-2lu\n", "sizeof unsigned long"		, sizeof(long));
	printf("%20s : %-2lu\n", "sizeof unsigned long long", sizeof(long long));
	printf("\n");
	printf("%20s : %-2lu\n", "sizeof float"				, sizeof(float));
	printf("%20s : %-2lu\n", "sizeof double"			, sizeof(double));
	printf("%20s : %-2lu\n", "sizeof long double"		, sizeof(long double));
	printf("\n");
	printf("%20s : %-2lu\n", "sizeof char*"				, sizeof(char*));
}

