#include<stdio.h>

//Declaration
void sum();

void main() {	
	//calling
	sum();	
	sum();	
	sum();
}

//Defination
void sum() {
	int a,b;
	
	printf("Enter a: ");
	scanf("%d",&a);
	printf("Enter b: ");
	scanf("%d",&b);
	
	printf("Sum: %d\n",a+b);	
}
