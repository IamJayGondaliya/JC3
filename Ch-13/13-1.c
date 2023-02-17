#include<stdio.h>
#include<string.h>
/*
		Ch-3
		User defined data types :			
			- Structure
				- it is a combination of multiple data types.
				- it can be created using 'struct' keyword.
				- it must be created in global area.
				- it contains the variable declaration only.
				- we cannot initialized the variables iniside the structure.
				- we cannot create UDFs inside the structure.
				- the inner variables(attributes) of structure can be accessed using object of structure.
			- Union
			- Enumeration
*/

struct Student {
	//attributes	=> categorized variables.
	int id;			// 4
	char name[20];	// 20	
	float per;		// 4
};					// 28

void main() {
	
	int n,i,l;
	
	printf("Enter n: ");
	scanf("%d",&n);	
	
	struct Student s[n];
	
	l = sizeof(s) / sizeof(s[0]);
	
	printf("Total size: %d\n\n",l);
	
	for(i=0; i<n; i++) {
		printf("Student: %d/%d\n",i+1,n);
		printf("Enter name: ");
		scanf("%s",&s[i].name);
		printf("Enter id: ");
		scanf("%d",&s[i].id);
		printf("Enter per: ");
		scanf("%f",&s[i].per);
	}
	
	for(i=0; i<n; i++) {
		printf("Student: %d/%d\n",i+1,n);
		printf("Enter id: %d\n",s[i].id);
		printf("Enter name: %s\n",s[i].name);
		printf("Enter per: %.2f\n",s[i].per);
	}
		
}

//void setAllStud(struct Student s[]) {	
//	int n,i;
//	
//	n = sizeof(s) / sizeof(s[0]);
//	
//	for(i=0; i<n; i++) {
//		printf("Student: %d/%d\n",i+1,n);
//		printf("Enter name: ");
//		gets(s[i].name);
//		printf("Enter id: ");
//		scanf("%d",s[i].id);
//		printf("Enter per: ");
//		scanf("%f",s[i].per);
//	}	
//}
//
//void getAllStud(struct Student s[]) {	
//	int n,i;
//	
//	n = sizeof(s) / sizeof(s[0]);
//	
//	for(i=0; i<n; i++) {
//		printf("Student: %d/%d\n",i+1,n);
//		printf("Enter id: %d\n",s[i].id);
//		printf("Enter name: %s\n",s[i].name);
//		printf("Enter per: %.2f\n",s[i].per);
//	}	
//}
//
//
//
//
//
//
//
//void idInput(int *a) {
//	printf("Enter id\t: ");
//	scanf("%d",a);
//}
//
//void nameInput(char a[]) {
//	printf("Enter name\t: ");
//	gets(a);
//}
//
//void perInput(float *a) {
//	printf("Enter per\t: ");
//	scanf("%f",a);
//}
//
//void printStud(struct Student s) {
//	printf("Id\t: %d\n",s.id);
//	printf("Name\t: %s\n",s.name);
//	printf("Per\t: %.2f\n",s.per);
//}











