#include<stdio.h>
#include<conio.h>

/*
	do
	{
		//Statemen<s>
		//updatation (changes)
	}while(condition);

	for(initialization ; condition ; updatation)
	{
		//Statement<s>
	}

	5!
	= 5 * 4 * 3 * 2 * 1
	= 120

	32.1
	3.2
	0.3
	0

	321/10 = 32.1 => rem = 1
	n%10 = rem

	12

	n * 10 + rem
	1 * 10 + 2

	armstrong number
	magic number
		123
		1 + 2 + 3 = 6
		1 * 2 * 3 = 6
		sum == mul => magic number
	prime number
	fibonacee series
	palindrome number
*/

main()
{
	int i,n,rev = 0,rem,cpy;
	clrscr();

	printf("Enter number : ");
	scanf("%d",&n);

	cpy = n;

	while(n!=0)
	{
		rem = n%10;
		rev = rev * 10 + rem;
		n = n/10;
	}

	printf("Reverse : %d\n",rev);

	if(cpy == rev)
	{
		printf("Palindrome");
	}
	else
	{
		printf("Not palindrome");
	}

	getch();
}





