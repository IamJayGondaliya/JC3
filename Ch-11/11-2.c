#include<stdio.h>

int sum(int ,int);
void avg(int ,int);
int arraySum(int[], int);
void arrayInput(int[],int);

void main() {
	
	int n;
	
	printf("Enter number of elements: ");
	scanf("%d",&n);
	
	int a[n],i,s;
	
	arrayInput(a,n);	
	s = arraySum(a,n);
	 
	avg(s,n);
	
}

//call by reference
void arrayInput(int a[],int n) {
	int i;	
	for(i=0; i<n; i++) {
		printf("Enter a[%d]: ",i);
		scanf("%d",&a[i]);
	}
}

//TSRS
int sum(int a,int b) {
	printf("Sum: %d\n",a+b);
	return a+b;
}

int arraySum(int a[],int n) {	
	int sum = 0,i;
	
	for(i=0; i<n; i++) {
		sum += a[i];
	}
	printf("Sum of array: %d\n",sum);		
	return sum;
}

void avg(int s,int n) {
	float a;	
	a = (float)s/(float)n;	
	printf("Average: %.2f\n",a);
}




