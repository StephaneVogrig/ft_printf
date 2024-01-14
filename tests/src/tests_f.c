/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_f.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 18:34:56 by stephane          #+#    #+#             */
/*   Updated: 2024/01/14 04:06:54 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void	tests_f(void)
{
	printf("\n");
	printf("test float\n");
	printf("--------------------------\n");

	printf(" | %i (ft_printf)\n", ft_printf("%.1f", FLOAT64_MIN));
	printf(" | %i            \n",    printf("%.1f", FLOAT64_MIN));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%.1f", 1e30));
	printf(" | %i            \n",    printf("%.1f", 1e30));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%.2000f", FLOAT64_MIN));
	printf(" | %i            \n",    printf("%.2000f", FLOAT64_MIN));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("Kashim a %f histoires à raconter", (double)1001));
	printf(" | %i            \n",    printf("Kashim a %f histoires à raconter", (double)1001));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("Il fait au moins %f", (double)-8000));
	printf(" | %i            \n",    printf("Il fait au moins %f", (double)-8000));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%f Lydie == |%f|", (double)'L'+'y'+'d'+'i'+'e'));
	printf(" | %i            \n",    printf("%%f Lydie == |%f|", (double)'L'+'y'+'d'+'i'+'e'));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%.10f, 0.9999999999 = %.10f", 0.9999999999));
	printf(" | %i            \n",    printf("%%.10f, 0.9999999999 = %.10f", 0.9999999999));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%.15f, 99.999999999999900000 = %.15f", 99.999999999999900000));
	printf(" | %i            \n",    printf("%%.15f, 99.999999999999900000 = %.15f", 99.999999999999900000));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%.40f,0.9999999999999999 = %.40f",0.9999999999999999));
	printf(" | %i            \n",    printf("%%.40f,0.9999999999999999 = %.40f",0.9999999999999999));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%.18f,0.125978542436587568 = %.18f",0.125978542436587568));
	printf(" | %i            \n",    printf("%%.18f,0.125978542436587568 = %.18f",0.125978542436587568));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%.18f,0.125978548534310421 = %.18f",0.125978548534310421));
	printf(" | %i            \n",    printf("%%.18f,0.125978548534310421 = %.18f",0.125978548534310421));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%.16f, 0.999999999999999900 = %.16f", 0.999999999999999900));
	printf(" | %i            \n",    printf("%%.16f, 0.999999999999999900 = %.16f", 0.999999999999999900));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%.17f, 1.025978548534310421 = %.17f", 1.025978548534310421));
	printf(" | %i            \n",    printf("%%.17f, 1.025978548534310421 = %.17f", 1.025978548534310421));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%f", 573.924));
	printf(" | %i            \n",    printf("%f", 573.924));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%#.0f", 7.4));
	printf(" | %i            \n",    printf("%#.0f", 7.4));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%#.1f, 7.3 = %#.1f", 7.3));
	printf(" | %i            \n",    printf("%%#.1f, 7.3 = %#.1f", 7.3));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%.0f, 1.0 = %.0f", 1.0));
	printf(" | %i            \n",    printf("%%.0f, 1.0 = %.0f", 1.0));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%.10f, 0.87650894255 = %.10f", 0.87650894255));
	printf(" | %i            \n",    printf("%%.10f, 0.87650894255 = %.10f", 0.87650894255));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%5.0f, 1.0 = %5.0f", 7.3));
	printf(" | %i            \n",    printf("%%5.0f, 1.0 = %5.0f", 7.3));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%f, 0.0f = %f", 0.0f));
	printf(" | %i            \n",    printf("%%f, 0.0f = %f", 0.0f));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%f, 42.0f = %f", 42.0f));
	printf(" | %i            \n",    printf("%%f, 42.0f = %f", 42.0f));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%f, 42.0f = %f", 0.1f));
	printf(" | %i            \n",    printf("%%f, 42.0f = %f", 0.1f));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%f, 42.0f = %f", 0.000001f));
	printf(" | %i            \n",    printf("%%f, 42.0f = %f", 0.000001f));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%f, 0.999999f = %f", 0.999999f));
	printf(" | %i            \n",    printf("%%f, 0.999999f = %f", 0.999999f));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%.0f, 0.999999f = %.0f", 0.999999f));
	printf(" | %i            \n",    printf("%%.0f, 0.999999f = %.0f", 0.999999f));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%.3f, 0.999999f = %.3f", 0.999999f));
	printf(" | %i            \n",    printf("%%.3f, 0.999999f = %.3f", 0.999999f));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%.7f, 0.999999f = %.7f", 0.999999f));
	printf(" | %i            \n",    printf("%%.7f, 0.999999f = %.7f", 0.999999f));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%.7f, 4242.4242f = %.7f", 4242.4242f));
	printf(" | %i            \n",    printf("%%.7f, 4242.4242f = %.7f", 4242.4242f));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%.9f, 4242.4242f = %.9f", 4242.4242f));
	printf(" | %i            \n",    printf("%%.9f, 4242.4242f = %.9f", 4242.4242f));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%.6f, 4242.4242f = %.6f", 4242.4242f));
	printf(" | %i            \n",    printf("%%.6f, 4242.4242f = %.6f", 4242.4242f));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%.6f, -4242.4242f = %.6f", -4242.4242f));
	printf(" | %i            \n",    printf("%%.6f, -4242.4242f = %.6f", -4242.4242f));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%.3f, 4242.4242f = %.3f", 4242.4242f));
	printf(" | %i            \n",    printf("%%.3f, 4242.4242f = %.3f", 4242.4242f));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%.9f, 424242.4242f = %.9f", 424242.4242f));
	printf(" | %i            \n",    printf("%%.9f, 424242.4242f = %.9f", 424242.4242f));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%.9f, 42424242.4242f = %.9f", 42424242.4242f));
	printf(" | %i            \n",    printf("%%.9f, 42424242.4242f = %.9f", 42424242.4242f));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%.9f, 0.999999999999f = %.9f", 0.999999999999f));
	printf(" | %i            \n",    printf("%%.9f, 0.999999999999f = %.9f", 0.999999999999f));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%.9f, 0.999999999999f = %.9f", 0.000000001f));
	printf(" | %i            \n",    printf("%%.9f, 0.999999999999f = %.9f", 0.000000001f));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%.9f, 0.999999999999f = %.9f", 3.32192809488736f));
	printf(" | %i            \n",    printf("%%.9f, 0.999999999999f = %.9f", 3.32192809488736f));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%020f, 0.0f = %020f", 0.0f));
	printf(" | %i            \n",    printf("%%020f, 0.0f = %020f", 0.0f));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%+020f, 0.0f = %+020.2f", 0.0f));
	printf(" | %i            \n",    printf("%%+020f, 0.0f = %+020.2f", 0.0f));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%020f, 0.0f = %020f", 42.42f));
	printf(" | %i            \n",    printf("%%020f, 0.0f = %020f",42.42f));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%+020f, 0.0f = %+020.2f", 42.42f));
	printf(" | %i            \n",    printf("%%+020f, 0.0f = %+020.2f", 42.42f));
	printf("\n");
	// printf(" | %i (ft_printf)\n", ft_printf("%%f, FLOAT_MAX = %f", FLOAT_MAX));
	// printf(" | %i            \n",    printf("%%f, FLOAT_MAX = %f", FLOAT_MAX));
	// printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%f, 42e42 = %f", 42e42));
	printf(" | %i            \n",    printf("%%f, 42e42 = %f", 42e42));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%.46f, FLOAT32_CLOSE_ZERO_POSITIVE = %.46f", FLOAT32_CLOSE_ZERO_POSITIVE));
	printf(" | %i            \n",    printf("%%.46f, FLOAT32_CLOSE_ZERO_POSITIVE = %.46f", FLOAT32_CLOSE_ZERO_POSITIVE));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%f, FLOAT32_MIN = %f", FLOAT32_MIN));
	printf(" | %i            \n",    printf("%%f, FLOAT32_MIN = %f", FLOAT32_MIN));
	printf("\n");
	ft_printf("f.7, -0.000032f = %.7f\n",  -0.000032f);
	printf(" | %i (ft_printf)\n", ft_printf("%%f.7, -0.000032f = %.7f",  -0.000032f));
	printf(" | %i            \n",    printf("%%f.7, -0.000032f = %.7f",  -0.000032f));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%f, -42.0f = %f",  -42.0f));
	printf(" | %i            \n",    printf("%%f, -42.0f = %f",  -42.0f));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%10f, 42.0f = %10f", 42.0f));
	printf(" | %i            \n",    printf("%%10f, 42.0f = %10f", 42.0f));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%-10f, 42.0f = %-10f", 42.0f));
	printf(" | %i            \n",    printf("%%-10f, 42.0f = %-10f", 42.0f));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%010f, 42.0f = %010f", 42.0f));
	printf(" | %i            \n",    printf("%%010f, 42.0f = %010f", 42.0f));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%+10f, 42.0f = %+10f", 42.0f));
	printf(" | %i            \n",    printf("%%+10f, 42.0f = %+10f", 42.0f));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%+010f, 42.0f = %+010f", 42.0f));
	printf(" | %i            \n",    printf("%%+010f, 42.0f = %+010f", 42.0f));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%% 10f, 42.0f = % 10f", 42.0f));
	printf(" | %i            \n",    printf("%% 10f, 42.0f = % 10f", 42.0f));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%.10f, 42.0f = %.10f", 42.0f));
	printf(" | %i            \n",    printf("%%.10f, 42.0f = %.10f", 42.0f));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%+.10f, 42.0f = %+.10f", 42.0f));
	printf(" | %i            \n",    printf("%%+.10f, 42.0f = %+.10f", 42.0f));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%% .10f, 42.0f = % .10f", 42.0f));
	printf(" | %i            \n",    printf("%% .10f, 42.0f = % .10f", 42.0f));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%-.10f, 42.0f = %-.10f", 42.0f));
	printf(" | %i            \n",    printf("%%-.10f, 42.0f = %-.10f", 42.0f));

	
	printf("\n");
	t_u_float64	f;
	f.exponent_biais = 2047;
	printf(" | %i (ft_printf)\n", ft_printf("%%f, nan = %f", f.f));
	printf(" | %i            \n",    printf("%%f, nan = %f", f.f));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%10f, nan = %10f", f.f));
	printf(" | %i            \n",    printf("%%10f, nan = %10f", f.f));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%010f, nan = %010f", f.f));
	printf(" | %i            \n",    printf("%%010f, nan = %010f", f.f));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%010.f, nan = %010.f", f.f));
	printf(" | %i            \n",    printf("%%010.f, nan = %010.f", f.f));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%010.2f, nan = %010.2f", f.f));
	printf(" | %i            \n",    printf("%%010.2f, nan = %010.2f", f.f));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%-10.1f, nan = %-10.1f", f.f));
	printf(" | %i            \n",    printf("%%-10.1f, nan = %-10.1f", f.f));
	
	f.sign = 1;
	printf(" | %i (ft_printf)\n", ft_printf("%%f, nan = %f", f.f));
	printf(" | %i            \n",    printf("%%f, nan = %f", f.f));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%10f, nan = %10f", f.f));
	printf(" | %i            \n",    printf("%%10f, nan = %10f", f.f));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%010f, nan = %010f", f.f));
	printf(" | %i            \n",    printf("%%010f, nan = %010f", f.f));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%010.f, nan = %010.f", f.f));
	printf(" | %i            \n",    printf("%%010.f, nan = %010.f", f.f));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%010.2f, nan = %010.2f", f.f));
	printf(" | %i            \n",    printf("%%010.2f, nan = %010.2f", f.f));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%-10.1f, nan = %-10.1f", f.f));
	printf(" | %i            \n",    printf("%%-10.1f, nan = %-10.1f", f.f));
	
	f.mantissa = 0;
	printf(" | %i (ft_printf)\n", ft_printf("%%f, nan = %f", f.f));
	printf(" | %i            \n",    printf("%%f, nan = %f", f.f));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%10f, nan = %10f", f.f));
	printf(" | %i            \n",    printf("%%10f, nan = %10f", f.f));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%010f, nan = %010f", f.f));
	printf(" | %i            \n",    printf("%%010f, nan = %010f", f.f));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%010.f, nan = %010.f", f.f));
	printf(" | %i            \n",    printf("%%010.f, nan = %010.f", f.f));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%010.2f, nan = %010.2f", f.f));
	printf(" | %i            \n",    printf("%%010.2f, nan = %010.2f", f.f));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%-10.1f, nan = %-10.1f", f.f));
	printf(" | %i            \n",    printf("%%-10.1f, nan = %-10.1f", f.f));
	
	f.sign = 0;
	printf(" | %i (ft_printf)\n", ft_printf("%%f, nan = %f", f.f));
	printf(" | %i            \n",    printf("%%f, nan = %f", f.f));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%10f, nan = %10f", f.f));
	printf(" | %i            \n",    printf("%%10f, nan = %10f", f.f));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%010f, nan = %010f", f.f));
	printf(" | %i            \n",    printf("%%010f, nan = %010f", f.f));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%010.f, nan = %010.f", f.f));
	printf(" | %i            \n",    printf("%%010.f, nan = %010.f", f.f));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%010.2f, nan = %010.2f", f.f));
	printf(" | %i            \n",    printf("%%010.2f, nan = %010.2f", f.f));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%-10.1f, nan = %-10.1f", f.f));
	printf(" | %i            \n",    printf("%%-10.1f, nan = %-10.1f", f.f));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%+-10.1f, nan = %+-10.1f", f.f));
	printf(" | %i            \n",    printf("%%+-10.1f, nan = %+-10.1f", f.f));
	printf("--------------------------\n");

	// ft_printf("%%.9f, -0.99999949 %.9f\n", -0.99999949);
	//    printf("%%.9f, -0.99999949 %.9f\n", -0.99999949);
}