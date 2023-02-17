#include<stdio.h>
#include<string.h>

/*
		- nested functions
		- recursion
*/

void arrayOperations(int[],int*);
void arrayInput(int[],int);
int insert(int[],int**);
int update(int[],int);
int delet(int[],int**);
void display(int[],int);

void main() {	
	int n;
	
	printf("Enter n: ");
	scanf("%d",&n);
	
	int a[n];	
	arrayInput(a,n);	
	
	arrayOperations(a,&n);
			
}

void arrayOperations(int a[], int *n) {
	
	int i;
		
	do{
		
		printf("Enter...\n");
		printf("1) Insert\n2) Update\n3) Delete\n4) Display\n5) Exit\nEnter your choice: ");
		scanf("%d",&i);
		
		switch(i) {
			case 1:
				insert(a,&n);
				break;
			case 2:
//				update(a,*n);
				break;
			case 3:
				delet(a,&n);
				break;
			case 4:
				display(a,*n);
				break;
			case 5:
				break;
			default: 
				printf("Choose the correct option\n");
		}
		
	}while(i!=5);
	
}

int delet(int a[],int **n) {
	
	int pos,i;
	
	printf("Enter position to delete between %d..%d: ",0,**n - 1);
	scanf("%d",&pos);
	
	for(i = pos; i<**n; i++) {
		a[i] = a[i+1];
	}
	
	**n = **n - 1;	
}

int insert(int a[],int **n) {
	
	int pos,val,i;
	
	printf("Enter position between 0..%d: ",**n -1);
	scanf("%d",&pos);
	printf("Enter value: ");
	scanf("%d",&val);
	
	for(i=**n; i>=pos; i--) {
		a[i] = a[i-1];
	}
	a[pos] = val;
	**n = **n + 1;
}

void arrayInput(int a[],int n) {	
	int i;
	
	for(i=0; i<n; i++) {
		printf("Enter %d element: ",i+1);
		scanf("%d",&a[i]);
	}	
}

void display(int a[],int n) {	
	int i;
	
	for(i=0; i<n; i++) {
		printf("Element %d: %d\n",i+1,a[i]);
	}	
}


 
