#include<stdio.h>

/*
		- Pointer of array
		- Chain of pointer
		- Pointer with UDF
*/

//Pages
void ScaleOfPointer();
void PointerOfArray();
void ChainOfPointer();

//Methods
void input(int*);
void arrayInput(int[],int);
void arrayDisplay(int[],int);

void main() {
	ScaleOfPointer();
}

void ChainOfPointer() {
	
	int a = 10;
	
	int *p1;
	int **p2;
	int ***p3;
	
	p1 = &a;
	p2 = &p1;
	p3 = &p2;
	
	printf("a\t: %d\t%u\n"		,    a	,&a);
	printf("p1\t: %d\t%u\t%d\n"	,  *p1	,&p1	,p1);
	printf("p2\t: %d\t%u\t%d\n"	, **p2	,&p2	,p2);
	printf("p3\t: %d\t%u\t%d\n"	,***p3	,&p3	,p3);
	
}

void PointerOfArray() {
	int n;
	input(&n);
	
	int a[n],i;
	arrayInput(a,n);
	arrayDisplay(a,n);
	
	int *p[n];
	
	for(i=0; i<n; i++) {
		p[i] = &a[i];
	}
	
	for(i=0; i<n; i++) {
		printf("Element %d using pointer: %d\n",i+1,*p[i]);
	}
	
}

void input(int *n) {
	printf("Enter value: ");
 	scanf("%d",n);
}

void arrayInput(int a[],int n) {
	int i;
	
	for(i=0; i<n; i++) {
		printf("Enter %d element: ",i+1);
		scanf("%d",&a[i]);
	}	
}

void arrayDisplay(int a[],int n) {
	int i;
	
	for(i=0; i<n; i++) {
		printf("Value of %d element: %d\n",i+1,a[i]);
	}
}
 
void ScaleOfPointer() {	
	int n;
	input(&n);
	
	int a[n],i;
	arrayInput(a,n);
	arrayDisplay(a,n);
	
	int *p;	
	p = &a[0]; // p = &a[0];
	
	for(i=0; i<n; i++) {
		printf("a[%d] using pointer: %d\n",i,*(p+i));
	}
}





