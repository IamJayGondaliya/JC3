#include<stdio.h>

/*
	Pointer :
		- pointer is a variable which stores address of another variable.
		- pointer can be created with asterisc '*' operator.
		- value of another variable can be stored with address of operator '&'.
		- to print or use the connected variable's value from pointer, we've to use * operator.
		- to print the address of connected variable, use pointer without * operator.
		- pointer of variable must have same data type.

		To print addres of variable :
			- %p	=> Hexadecimal
			- %x	=> Hexadecimal
			- %u	=> Decimal address (Numeric)
*/

void page1();
void input(int*);
void swap(int*,int*);
void page2();
void scalePointer();

void main() {
	scalePointer();
}

void scalePointer() {	
	int a[5] = {11, 22, 33, 44, 55},i;	
	int *p;
	
	p = &a; //base value => a[0]
	
	//Scale of pointer
	for(i=0; i<5; i++) {
		printf("a[%d]: %u\n",i,*(p+i));
	}	
}

void page2() {	
	int a[10];
	int *p;
	char *c;
	
	//find legth of array using sizeof operator
	printf("Size: %d\n",sizeof(c));	
}

void page1() {		
	int a,b;
	
	input(&a);
	input(&b);
	
	swap(&a,&b);
	
	printf("a: %d\n",a);
	printf("b: %d\n",b);
}

void input(int *p) {
	printf("Enter data: ");
	scanf("%d",p);
}

//call by reference(address)
void swap(int *m,int *n) {
	*m = *m + *n;
	*n = *m - *n;
	*m = *m - *n;
}








