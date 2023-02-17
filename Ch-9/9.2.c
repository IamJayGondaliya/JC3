#include<stdio.h>
//1D
/*
		CRUD operations
		
		C	=> Create, Insert
		R	=> Retrive, display
		U	=> Update
		D	=> Delete		
*/
main() {	 
	int a[3][3] = { {1,2,3}, {4,5,6}, {7,8,9} }; 
	
	int i,j;
	
	for(i=0; i<3; i++) {
		for(j=0; j<3; j++) {
			printf("a[%d][%d]: %d\n",i,j,a[i][j]);
		}
	}	
}
