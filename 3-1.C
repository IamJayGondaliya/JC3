#include<stdio.h>
#include<conio.h>

/*
	Static == fix value
	Dynamic == User input

	scanf()		== scan formatted

	scanf("format specifier",address of variable);
	address of operator == &
	&varName == address
*/

main()
{
	int a,b,c;
	clrscr();

	//WAP to swap two variables using third variable
	printf("Enter value of a and b: ");
	scanf("%d%d",&a,&b);

	c = a; // 10
	a = b; // 20
	b = c; // 20 = 10

	printf("a: %d\nb: %d",a,b);

	getch();
}








