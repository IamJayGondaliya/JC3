#include<stdio.h>
#include<conio.h>
#define pi 3.14
#define P printf
/*
	int	1, 10, 25        	%d,%i
	float 	3.14, 2.5, ...    	%f
	char	'A', 'b', 'z'....       %c

	Keywords : 32
		Reserved words which cannot be used in other purpose.

	Constant :
		to fix any value or expression into specific word.

		- using 'const' keyword.
			const dataType varName = value;
			- const variable must be initialized.
		- using MACRO
			- use of pre-processor(#) and define keyword

			#define varName value
			- MACRO defined objects cant be declared twice.

*/
main()
{

	float r = 5;
	clrscr();
	P("Area of circle = %.2f",pi * r * r);
	getch();
}
/*
	Area of circle   : pi * r * r
	Area of square   : l * l
	Area of rect     : l * b
	Area of triangle : 0.5 * h * b
	Parameters of cir: 2 * pi * r * r
	Simple Interest  : (P * R * N) / 100
*/




