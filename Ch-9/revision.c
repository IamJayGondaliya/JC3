#include<stdio.h>

/*
		1D array CRUD operations: 
			- C	: Create, Insert
			- R	: Retrive, Read, Display
			- U	: Update
			- D	: Delete
*/

main() {
	int n;
	
	printf("Enter size of array: ");
	scanf("%d",&n);
	
	int a[n],i,pos,val,choice;
	
	for(i=0; i<n; i++){
		printf("Enter a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	
	
	do{
		
		printf("\nEnter 1 to Insert\n");
		printf("Enter 2 to Update\n");
		printf("Enter 3 to Delete\n");
		printf("Enter 4 to Display\n");
		printf("Enter 5 to Exit\n");
		printf("Enter your choice: ");
		scanf("%d",&choice);
		
		switch(choice) {
			case 1:
				//Insert								
				printf("Enter position: ");
				scanf("%d",&pos);
				printf("Enter value to insert: ");
				scanf("%d",&val);
				
				for(i=n-1; i>=pos;i--) {
					a[i+1] = a[i];
				}
				a[pos] = val;
				n++;
				
				break;
			case 2:
				//Update	
				
				printf("Enter position: ");
				scanf("%d",&pos);
				printf("Enter value to insert: ");
				scanf("%d",&val);				
				a[pos] = val;
				
				break;
			case 3:
				//Delete				
						
				printf("Enter position: ");
				scanf("%d",&pos);								
				for(i=pos; i<n; i++) {
					a[i] = a[i+1];
				}
				n--;
				
				break;
			case 4:
				//Display
				for(i=0; i<n; i++) {
					printf("a[%d]: %d\n",i,a[i]);
				}
				
				break;
			case 5:
				break;
			default:
				printf("Invalid choice\n");
		}
	
	}while(choice!=5);
	
	printf("\nThanks for using our system !!");
	
}

