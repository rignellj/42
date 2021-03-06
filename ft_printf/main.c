/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrignell <jrignell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/06 12:26:13 by jrignell          #+#    #+#             */
/*   Updated: 2020/02/20 18:08:37 by jrignell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"
#include <limits.h>

int		main(void)
{
//static int a = 4;
//int a1 = 1235;
int i = 0;
int j = 0;

/*
static unsigned int		mx_u = 235;
//static long double			mx_Lf = 0.375l;
static double				mx_f = 0.625;
static long				mx_li =  4223372036854775800;
static long long			mx_lli = 3223372036654775200;
static char				mx_c = 'G';
static short				mx_hi = -3244;
//static char				mx_hhi = 'F';
static char			   *mx_s = "Hello, World!";
static int					mx_i = 42;

*************
*************
1
*************
*************
"  %X    %lli    %c    %i    %f    	%u  "
"  %c    %X    %li    %hi    %Lf    %p  "
"  %x    %X    %u    %s    	%li    	%f  "
"  %u    %x    %lli    %hi    %i    %hhi  "
"  %X    %hhi    %lli    %p    %li    %hi  "
"  %p    %X    %s    %li    %u    %c  "
"  %i    %X    %lli    %u    %s    %hhi  ""
"  %p    %hhi    %s    %li    %Lf    %hi  "






	
ft_printf("  %o    %u    %li    %s    %X    %lli  ",
			mx_u, mx_u, mx_li, mx_s, mx_u, mx_lli);
ft_printf("  %o    %c    %li    %p    %hi    %f  ",
			mx_u, mx_c, mx_li, &mx_i, mx_hi, mx_f);
ft_printf("  %x    %X    %o    %s    %lli    %hhi  ",
			mx_u, mx_u, mx_u, mx_s, mx_lli, mx_c);
ft_printf("  %x    %X    %u    %s    %li    %f  ",
			mx_u, mx_u, mx_u, mx_s, mx_li, mx_f);
ft_printf("  %u    %x    %lli    %hi    %i    %hhi  ");
ft_printf("  %p    %X    %s    %li    %u    %c  ",
			&mx_i, mx_u, mx_s, mx_li, mx_u, mx_c);
ft_printf("  %i    %X    %lli    %u    %s    %hhi  ",
			mx_i, mx_u, mx_lli, mx_u, mx_s, mx_c);
ft_printf("  %x    %X    %o    %s    %lli    %hhi  ",
			mx_u, mx_u, mx_u, mx_s, mx_lli, mx_c);
*/
printf("\n");

/*
********************************************************************************
**                                                                            **
**                         CONVERSIONS FOR d & i                              **
**                                                                            **
********************************************************************************
*/
/*
i += printf("%d", -1);
j += ft_printf("%d", -1);
i += printf("% d", -42);
j += ft_printf("% d", -42);
i += printf("%+d", 42);
j += ft_printf("%+d", 42);
i += printf("%+7i", 0);
j += ft_printf("% +7i", 0);
i += printf("%+-7.10i", -123456789);
j += ft_printf("%+-7.10i", -123456789);
i += printf("% -8.5i", 456);
j += ft_printf("% -8.5i", 456);
i += printf("% 10.5d", -216);
j += ft_printf("% 10.5d", -216);
i += printf("%07i", -54);
j += ft_printf("%07i", -54);
i += printf("% 10.5ld", -9223372036854775807);
j += ft_printf("% 10.5ld", -9223372036854775807);
i += printf("%+-5d", 0);
j += ft_printf("%+-5d", 0);
i += printf("%+5.d ", 0);
j += ft_printf("%+5.d ", 0);
i += printf("%.d %.0d", 0, 0);
j += ft_printf("%.d %.0d", 0, 0);
i += printf("%5.d ", 0);
j += ft_printf("%5.d ", 0);
i += printf("%04d ", -532);
j += ft_printf("%04d ", -532);
i += printf("%05d", 42);
j += ft_printf("%05d", 42);
i += printf("%.10d", -42);
j += ft_printf("%.10d", -42);
i += printf("%.2d", -1);
j += ft_printf("%.2d", -1);
i += printf("%03.2d", 0);
j += ft_printf("%03.2d", 0);
i += printf("%10.5d", 4242);
j += ft_printf("%10.5d", 4242);
i += printf("%-5d", 42);
j += ft_printf("%-05d", 42);
i += printf("%5d", -42);
j += ft_printf("%5d", -42);
j += ft_printf("%3d", 42);
i += printf("%3d", 42);
i += printf("%2.5d", -42);
j += ft_printf("%2.5d", -42);
*/
/*
********************************************************************************
**                                                                            **
**                         CONVERSIONS FOR x & X                              **
**                                                                            **
********************************************************************************
*/
/*
i += printf("%#3x", 0);
j += ft_printf("%#3x", 0);
i += printf("%#5.0x", 0);
j += ft_printf("%#5.0x", 0);
i += printf("%#X", 0);
j += ft_printf("%#X", 0);
i += printf("%#8.5x", 0);
j += ft_printf("%#8.5x", 0);
i += printf("%#7x", 0);
j += ft_printf("%#7x", 0);
i += printf("%#08x", 42);
j += ft_printf("%#08x", 42);
i += printf("%-#7x", 1);
j += ft_printf("%-#7x", 1);
i += printf("%#7x", 1);
j += ft_printf("%#7x", 1);
i += printf("%-2.7x", 3267);
j += ft_printf("%-2.7x", 3267);
i += printf("%#8.5lx", (unsigned long)1);
j += ft_printf("%#8.5lx", 1);
i += printf("%7x", 0);
j += ft_printf("%+7x", 0);
i += printf("%-7.10x", -123456789);
j += ft_printf("%-7.10x", -123456789);
i += printf("%#-8.5X", 9);
j += ft_printf("%#-8.5X", 9);
i += printf("%10.5x", -216);
j += ft_printf("%10.5x", -216);
i += printf("%07X", -54);
j += ft_printf("%07X", -54);
i += printf("%#10.5lx", -9223372036854775807);
j += ft_printf("%#10.5lx", -9223372036854775807);
i += printf("%-5X", 0);
j += ft_printf("%-5X", 0);
i += printf("%5.x ", 0);
j += ft_printf("%5.x ", 0);
i += printf("%.x %.0x", 0, 0);
j += ft_printf("%.x %.0x", 0, 0);
i += printf("%5.x ", 0);
j += ft_printf("%5.x ", 0);
i += printf("%04x ", -532);
j += ft_printf("%04x ", -532);
i += printf("%05x", 42);
j += ft_printf("%05x", 42);
i += printf("%.10x", -42);
j += ft_printf("%.10x", -42);
i += printf("%.2x", -1);
j += ft_printf("%.2x", -1);
i += printf("%03.2x", 0);
j += ft_printf("%03.2x", 0);
i += printf("%10.5X", 4242);
j += ft_printf("%10.5X", 4242);
i += printf("%-5X", 42);
j += ft_printf("%-05X", 42);
i += printf("%5X", -42);
j += ft_printf("%5X", -42);
j += ft_printf("%3X", 42);
i += printf("%3X", 42);
i += printf("%2.5X", -42);
j += ft_printf("%2.5X", -42);
*/
/*
********************************************************************************
**                                                                            **
**                         CONVERSIONS FOR o                                  **
**                                                                            **
********************************************************************************
*/
/*
i += printf("%#6o", 2500);
j += ft_printf("%#6o", 2500);
i += printf("%#7o", 1);
j += ft_printf("%#7o", 1);
i += printf("|%#.3o|", 0);
j += ft_printf("|%#.3o|", 0);
i += printf("|%#7o|", 0);
j += ft_printf("|%#7o|", 0);
i += printf("%#.5o", 21);
j += ft_printf("%#.5o", 21);
i += printf("%#8.5o", 0);
j += ft_printf("%#8.5o", 0);
i += printf("@moulitest: %#.o %#.0o", 0, 0);
j += ft_printf("@moulitest: %#.o %#.0o", 0, 0);
i += printf("%#o", 0);
j += ft_printf("%#o", 0);
i += printf("%-#7.4o", 1);
j += ft_printf("%-#7.4o", 1);
i += printf("%-2.7o", 3267);
j += ft_printf("%-2.7o", 3267);
i += printf("%7o", 0);
j += ft_printf("%+7o", 0);
i += printf("%-7.10o", -123456789);
j += ft_printf("%-7.10o", -123456789);
i += printf("%#6.5lo ", (unsigned long)1);
j += ft_printf("%#6.5lo ", 1);
i += printf("%#-8.5o ", 9);
j += ft_printf("%#-8.5o ", 9);
i += printf("%10.5o", -216);
j += ft_printf("%10.5o", -216);
i += printf("%07o", -54);
j += ft_printf("%07o", -54);
i += printf("%#10.5lo", -9223372036854775807);
j += ft_printf("%#10.5lo", -9223372036854775807);
i += printf("%-5o", 0);
j += ft_printf("%-5o", 0);
i += printf("%5.o ", 0);
j += ft_printf("%5.o ", 0);
i += printf("%.o %.0o", 0, 0);
j += ft_printf("%.o %.0o", 0, 0);
i += printf("%5.o ", 0);
j += ft_printf("%5.o ", 0);
i += printf("%04o ", -532);
j += ft_printf("%04o ", -532);
i += printf("%05o", 42);
j += ft_printf("%05o", 42);
i += printf("%.10o", -42);
j += ft_printf("%.10o", -42);
i += printf("%.2o", -1);
j += ft_printf("%.2o", -1);
i += printf("%03.2o", 0);
j += ft_printf("%03.2o", 0);
i += printf("%10.5o", 4242);
j += ft_printf("%10.5o", 4242);
i += printf("%-5o", 42);
j += ft_printf("%-05o", 42);
i += printf("%5o", -42);
j += ft_printf("%5o", -42);
j += ft_printf("%3o", 42);
i += printf("%3o", 42);
i += printf("%2.5o", -42);
j += ft_printf("%2.5o", -42);
*/
/*
********************************************************************************
**                                                                            **
**                         CONVERSIONS FOR u                                  **
**                                                                            **
********************************************************************************
*/
/*
i += printf("%07u", 1);
j += ft_printf("%07u", 1);
i += printf("%0u", 0);
j += ft_printf("%0u", 0);
i += printf("%07u", 1);
j += ft_printf("%07u", 1);
i += printf("%7u", 0);
j += ft_printf("%7u", 0);
i += printf("%-2.7u", 3267);
j += ft_printf("%-2.7u", 3267);
i += printf("%07u", 0);
j += ft_printf("%07u", 0);
i += printf("%-7.10u", -123456789);
j += ft_printf("%-7.10u", -123456789);
i += printf("%06.5lu ", (unsigned long)1);
j += ft_printf("%06.5lu ", 1);
i += printf("%-8.5u ", 9);
j += ft_printf("%-8.5u ", 9);
i += printf("%010.5u", -216);
j += ft_printf("%010.5u", -216);
i += printf("%07u", -54);
j += ft_printf("%07u", -54);
i += printf("%010.5lu", -9223372036854775807);
j += ft_printf("%010.5lu", -9223372036854775807);
i += printf("%-5u", 0);
j += ft_printf("%-5u", 0);
i += printf("%0.u %0.0u", 0, 0);
j += ft_printf("%0.u %0.0u", 0, 0);
i += printf("%05.u ", 0);
j += ft_printf("%05.u ", 0);
i += printf("%05.u ", 0);
j += ft_printf("%05.u ", 0);
i += printf("%04u ", -532);
j += ft_printf("%04u ", -532);
i += printf("%05u", 42);
j += ft_printf("%05u", 42);
i += printf("%0.10u", -42);
j += ft_printf("%0.10u", -42);
i += printf("%0.2u", -1);
j += ft_printf("%0.2u", -1);
i += printf("%03.2u", 0);
j += ft_printf("%03.2u", 0);
i += printf("%010.5u", 4242);
j += ft_printf("%010.5u", 4242);
i += printf("%-5u", 42);
j += ft_printf("%-05u", 42);
i += printf("%5u", -42);
j += ft_printf("%5u", -42);
j += ft_printf("%3u", 42);
i += printf("%3u", 42);
i += printf("%2.5u", -42);
j += ft_printf("%2.5u", -42);
*/
/*
********************************************************************************
**                                                                            **
**                         CONVERSIONS FOR s                                  **
**                                                                            **
********************************************************************************
*/
/*
i += printf("%.2s is a string", "this");
j += ft_printf("%.2s is a string", "this");
i += printf("%5.2s", "this");
j += ft_printf("%5.2s", "this");
i += printf("%3.s", "123");
j += ft_printf("%3.s", "123");
i += printf("%3.s", NULL);
j += ft_printf("%3.s", NULL);
i += printf("%5s", "goes over");
j += ft_printf("%5s", "goes over");
i += printf("%-15.15s", "hellohello1234");
j += ft_printf("%-15.15s", "hellohello1234");
*/
/*
********************************************************************************
**                                                                            **
**                         CONVERSIONS FOR p                                  **
**                                                                            **
********************************************************************************
*/
/*
i += printf("%5p", (void *)0);
j += ft_printf("%5p", 0);
i += printf("%15p", &"213");
j += ft_printf("%15p", &"213");
i += printf("%5p", NULL);
j += ft_printf("%5p", NULL);
*/
/*
********************************************************************************
**                                                                            **
**                         CONVERSIONS FOR c                                  **
**                                                                            **
********************************************************************************
*/
/*
i += printf("%c", '\0');
j += ft_printf("%.2c", NULL);
i += printf("%.0%");
j += ft_printf("%.0%");
i += printf("%-15c", '\0');
j += ft_printf("%-15c", '\0');
i += printf("%1c", '\0');
j += ft_printf("%1c", '\0');
i += printf("%15c", '2');
j += ft_printf("%15c", '2');
*/
/*
********************************************************************************
**                                                                            **
**                         CONVERSIONS FOR f                                  **
**                                                                            **
********************************************************************************
*/

i += printf("%#-5.1f", 7.3);
j += ft_printf("%#-5.1f", 7.3);
/*
i += printf("%05.0f", -7.3);
j += ft_printf("%05.0f", -7.3);
i += printf("%#.0f", 7.4);
j += ft_printf("%#.0f", 7.4);
i += printf("% 5.0f", 7.3);
j += ft_printf("% 5.0f", 7.3);
i += printf("%f", 7.3);
j += ft_printf("%f", 7.3);
i += printf("%.1f", 7.3);
j += ft_printf("%.1f", 7.3);
*/


/*
j += ft_printf("%#+ -05.2Lf	\n", 7.3);
j += ft_printf("%#+ -5.2i	\n", 7.3);
j += ft_printf("%#+ -5.10hx	\n", 7.3);
j += ft_printf("%#+ -8.2hho	\n", 7.3);
j += ft_printf("%#+ -05.2ld	\n", 7.3);


j += ft_printf("%5.5s %5c %% %5.5d %5.5i %5.5o %5.5u %5.5x %5.5X %5.5f ", NULL, 0, 0, 0, 0, 0, 0, 0, 0.0);
i += printf("%5.5s %5c %% %5.5d %5.5i %5.5o %5.5u %5.5x %5.5X %5.5f ", NULL, 0, 0, 0, 0, 0, 0, 0, 0.0);

j += ft_printf("%5.5s %5c %% %+5.5d %+5.5i %#5.5o %-5.5u %#5.5x %#5.5X %#+5.5f	", NULL, 0, 0, 0, 0, 0, 0, 0, 0.0);
i += printf("%5.5s %5c %% %+5.5d %+5.5i %#5.5o %-5.5u %#5.5x %#5.5X %#+5.5f	", NULL, 0, 0, 0, 0, 0, 0, 0, 0.0);


j += ft_printf("%#5.6x	", 0);

i += printf("%#5.6x	", 0);


j += ft_printf("%#6.3X	", 0);

i += printf("%#6.3X	", 0);


j += ft_printf("%5c	", 0);

i += printf("%5c	", 0);

j += ft_printf("%05.0f", -7.3);

i += printf("%05.0f", -7.3);

j += ft_printf("%05u	", 43);

i += printf("%05u	", 43);

j += ft_printf("%06.5u	", 8375);

i += printf("%06.5u	", 8375);

j += ft_printf("%05.1f	", 7.3);

i += printf("%05.1f	", 7.3);

j += ft_printf("%+.0f	", -7.4);

i += printf("%+.0f	", -7.4);

j += ft_printf("%+.0f	", 7.4);

i += printf("%+.0f	", 7.4);

j += ft_printf("%#.3x	", 0);

i += printf("%#.3x	", 0);

j += ft_printf("%#.0o	", 0);

i += printf("%#.0o	", 0);

j += ft_printf("%#.5o	", 5263);

i += printf("%#.5o	", 5263);

j += ft_printf("%#.5o	", 21);

i += printf("%#.5o	", 21);

i += printf("this %#o number	", 17);

j += ft_printf("this %#o number	", 17);

j += ft_printf("%#.5x", 21);

i += printf("%#.5x", 21);

j += ft_printf("%#8.5x", 34);

i += printf("%#8.5x", 34);

j += ft_printf("	%#-4.3x", 6983);

i += printf("	%#-4.3x", 6983);




	j += ft_printf("%#.0f ", 7.4);
	
	
	i += printf("%#.0f ", 7.4);
	
	
	
	j += ft_printf("%x ", 0);
	i += printf("%x ", 0);

	j += ft_printf("%+i ", 7);
	i += printf("%+i ", 7);


	

	

i  += printf("%Lf ", (long double)a);
j += ft_printf("%Lf ", (long double)a);


	i += printf("%u ", (unsigned)a1);
	j += ft_printf("%u ", (unsigned)a1);



	char aa = 'a';
	char ca = 'c';
	printf("Hello %c %c %c ", aa, 'b', ca);
	ft_printf("Hello %c %c %c ", aa, 'b', ca);


	char *str = "World";
	printf("Hello %s ", str);
	ft_printf("Hello %s ", str);
	printf("Hello %s ", "Mellou");
	ft_printf("Hello %s ", "Mellou");

i +=	printf("%llX ", (unsigned long long)-42);
j +=	ft_printf("%llX ", (unsigned long long)-42);
*/
/*
**	CHECK %p %c %s
*/
/*
	char *str1 = "Moi";
	printf("Hello %p %c %s ", str1, 'a', str1);
	ft_printf("Hello %p %c %s ", str1, 'a', str1);
*/

/*
**	CHECK %hhd and %lld
*/

/*
**	CHECK %hho and %llo
** %d--> for int
** %u--> for unsigned int
** %ld--> for long int
** %lu--> for unsigned long int
** %lld--> for long long int
** %llu--> for unsigned long long int
*/
/*
i +=		printf("%i %o %u %x %X ", 213, 165, 123132, 159, 465);
j +=	ft_printf("%i %o %u %x %X ", 213, 165, 123132, 159, 465);
*/
/*
**	CHECK %hhu and %llu
*/
/*
i +=	printf("%llu ", (unsigned long long)ULONG_MAX+1);
j +=	ft_printf("%llu ", (unsigned long long)ULONG_MAX+1);
*/
/*
**	CHECK %llx, %llX, %hhx and %hhX
*/

/*
i +=	printf("%hhd %lli ", (char)'b', (long long)-3132132321321);
j +=	ft_printf("%hhd %lli ", (char)'b', (long long)-3132132321321);
*/






//	printf("itoabase_u: %s	", ft_itoa_base_u((unsigned long)-1, 16, 1));

/*
	unsigned char eena = (unsigned char)4200;
i +=	printf("%hhx %hhX %llx %llX ", eena, (unsigned char)255, (unsigned long long)ULONG_MAX, (unsigned long long)-45);
j +=	ft_printf("%hhx %hhX %llx %llX ", eena, (unsigned char)255, (unsigned long long)ULONG_MAX, (unsigned long long)-45);
*/


/*
**	CHECK %hd %ld %hi and %li
*/
/*
i +=	printf("%hd %ld %hi %li ", (short)(SHRT_MAX+1), (long)(LONG_MIN), (short)(SHRT_MIN-1), (long)(LONG_MAX));
j +=	ft_printf("%hd %ld %hi %li ", (short)(SHRT_MAX+1), (long)(LONG_MIN), (short)(SHRT_MIN-1), (long)(LONG_MAX));
*/
/*
**	CHECK %ho %lo with SHRT_MAX, LONG_MIN, SHRT_MIN, LONG_MAX
*/
/*
i +=	printf("%ho %lo %ho %lo ", (short)(SHRT_MAX+1), (long)(LONG_MIN), (short)(SHRT_MIN-1), (long)(LONG_MAX));
j +=	ft_printf("%ho %lo %ho %lo ", (short)(SHRT_MAX+1), (long)(LONG_MIN), (short)(SHRT_MIN-1), (long)(LONG_MAX));
*/
/*
**	CHECK %hu %lu with INT_MAX, LONG_MAX, ULONG_MAX, ULONG_MAX
*/
/*
	printf("%hu %lu %hu %lu ", (short)(INT_MAX), (long)(LONG_MAX), (short)(ULONG_MAX), (long)(ULONG_MAX));
	ft_printf("%hu %lu %hu %lu ", (short)(INT_MAX), (long)(LONG_MAX), (short)(ULONG_MAX), (long)(ULONG_MAX));
*/
/*
**	CHECK %hx %hX %lx %lX with INT_MAX, ULONG_MAX, ULONG_MAX, ULONG_MAX
*/
/*
	printf("%hx %hX %lx %lX ", (short)(INT_MAX), (short)(ULONG_MAX), (long)(ULONG_MAX), (unsigned long)(ULONG_MAX));
	ft_printf("%hx %hX %lx %lX ", (short)(INT_MAX), (short)(ULONG_MAX), (long)(ULONG_MAX),  (unsigned long)(ULONG_MAX));
*/
/*
**	CHECK %d %i %o %u %x %X with LONG_MAX, LONG_MIN, 16, (unsigned)(-1)
*/
/*
	printf("%d %i %o %u %x %X ", (int)(LONG_MAX), (int)(LONG_MIN), (signed)(16), (unsigned)(-1), 2, 3);
	ft_printf("%d %i %o %u %x %X ", (int)(LONG_MAX), (int)(LONG_MIN), (signed)(16), (unsigned)(-1), 2, 3);
*/
/*
	printf("\n%.10lf\n", (double)0.3);
	float y;
	int i = (3 << 2);

	y = i;
	for (int j = 0; j < 5; j++)
	{
		printf("%d %f     ", i, y);
		printf("%08x %08x\n", i, *((int*)&y));
		y += 1.0;
		i += 1;
	}
	ft_putnbr(LONG_MIN);
*/
/*
**	CHECK %% f lf Lf and width
*/
/*
	long double a11 = 509.99;
	 i += printf("Original %6llu ", (long long)a11);
	 j += ft_printf("My %12llu ", (long long)a11);
*/
	printf("\nOriginal printf returns %d\nMy printf returns       %d\n", i, j);
	return (0);

/*
	NOT YET WITH WIDTH AND MINUS You have to manage the following conversions: csp
	CHECK You have to manage the following conversions: diouxX with the following flags: hh, h, l and ll.
	CHECK You have to manage the following conversion: f with the following flags: l and L.
	CHECK You must manage %%
	CHECK You must manage the flags #0-+ and space
	CHECK You must manage the minimum field-width
	You must manage the precision
	*/
}