#include<stdio.h>

/*
		Union :
			- combination of multiple data types
			- union can be created using 'union' keyword
			- it's inner variables can be accessed using object of union
			- in case of storing and retriving multiple attributes, union isn't useful at all
			  because it stores only the last given value properly. The earlier valeus won't 
			  be accessed.
			  
		Enumeration :
			- it is used to give the index of attributes
			- can be created using 'enum' keyword.
			- it doesn't require object to access the inner attributes.
			- indexing order of enum can be modified also.
			- attributes doesn't need data types, they are integer by default.
*/

enum week {
	sun=10, mon, tue, wed = 30, thu, fri, sat
//	10	 	11...........
};

void main() {
	printf("Tue: %d",sat);		
}

union Subject {
	int math;
	int sci;
	int ss;
	int eng;
	int guj;
};

union Student {
	int id;
	char name[20];
	union Subject sub;
	float per;
	char grade;
};










