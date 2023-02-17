#include<stdio.h>
#include<conio.h>

/*
	Looping :
		- it means to repeat a specific code untill the condition
		  isn't satisfied.

		- Entry Control Loop
			- while
			- for
		- Exit Control Loop
			- do ... while

		- Three cieterias of loop
			- initialization	starting point
			- condition             ending point
			- unpgradation
				- incr / decr

	while loop :

		while(condition)
		{
			//Statements
		}

	- 1 - N sum

	<	++
	>	--
*/

main()
{
	int i=1,n,sum = 0;
	clrscr();

	printf("Enter ending point: ");
	scanf("%d",&n);

	while(i<=n)
	{
		printf("Value of i : %d\n",i);
		sum += i;
		i++;
	}

	printf("Sum of all elements : %d",sum);

	getch();
}












