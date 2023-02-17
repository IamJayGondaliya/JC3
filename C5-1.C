#include<stdio.h>
#include<conio.h>
/*
	Operator :
		operators are the symbol which helps to perform mathematical
	or logical operations between operands.

	Operand :
		- it can be either value or variable

	Types of operator :
		1) unary  (one operand)
			- incriment ++
				- pre incriment	  => ++a / ++10  (on the spot)
				- post incriment  => a++ / 10++  (next line)
			- decriment --
				- pre decriment   => --a / --10
				- post decriment  => a-- / 10--
		2) binary  (two operand)
			- arithmatic	=> +, -, *, /, %
			- assignment    => =, +=, -=, *=, /=, %=
			- conditional   => >, >=, <, <=, ==, !=
			- logical       => &&, ||, !
		3) ternory  (two or more operand)
			- ternory   	=> ?:
				=> (condition) ? True : False ;

	Operator precedence (priority) :

	BODmas

	()	Brackets
	%,2^2   Operator
	* /     Div / mult	(LTR) => Left to Right
	+ -     Add / Subtract  (LTR) => Left to Right
	=	Equel to	(RTL) => Right to Left


	A = 65	- Z = 90
	a = 97  - z = 122
	0 = 48  - 9 = 56

*/
main()
{
	int a,b;
	clrscr();

	printf("Enter a: ");
	scanf("%d",&a);

	printf("Value : %c\n",a);
	getch();
}

/*
	(a+2)^2 = a^2 + 2ab + b^2
		= (a*a) + (2*a*b) + (b*b)
*/







