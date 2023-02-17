#include<stdio.h>

/*
		14 File Handling
			14.1
				- File opening modes
				- File reading
				- File writing
				
				
	//To store file's address into the pointer
	// to create new file || access the existing file	
	fp = fopen("address || name","mode");
	//			address	=> desired location can be accessed
	//			name	=> only can get the location of source code's file
	//			modes	=> the use of file
	//				- to write in file			=> "w"  => can create new file
	//				- to read data of file		=> "r"	=> can't create new file
	//				- to append in file			=> "a"  => can create new file
	//					- append is similar as write mode but, write removes the previous data 
	//					  from file to store new data and append prints the new data at the last
	//					  of pre existed data.
	//					- the old data won't be removed in append but, write removes and overrides on old data.
	
	- fclose(fp) :
			- to free up memory bytes consumed by our document during application tasks
	
	- fopen("address || name","mode");
	- fclose(fp);	
	- check null possibilities
	- fprintf(<FilePointer>,"data",[var]);
	
*/

struct Student{
	int id;
	char name[20];
	float per;
} s = {101,"Abhi",84.57};

void main() {
	
	FILE *fp;
	int i;
		
	fp = fopen("C:\\Users\\TH1\\Desktop\\New.txt","a");
	
	if(fp!=NULL) {		
		
		for(i=0; i<5;i++) {
			fprintf(fp,"Data from file\n\nId\t: %d\nName\t: %s\nPer\t: %.2f\n",s.id,s.name,s.per);
		}
		
		printf("\nFile operation completed successfully !!\n");
	} else {
		printf("\nFile opening failed !!\n");
	}
	
	fclose(fp);
}









