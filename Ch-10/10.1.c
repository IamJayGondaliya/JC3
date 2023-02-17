#include<stdio.h>

/*
		String :
			- String is a collection of character values.
			- In C language, there is no specified data type for String so we use character array as a String.
			- String is an ordered collection means it posses the index to target it's elements.
			
		String creation :
			- it can be created as similar as array.
			
		Display the String :
			- as similar as array using loop until length or null.
			- using format specifier: "%s"
			
		Insertion(input) in String: 
			- using format specifier "%s" in scanf but it's limited until space.
			- to include the scentance in String we've to modify the format specifier using negation operator.
				- "%[^\n]"
				- %  : indicates the format specifier
				- [] : gives range to include or exclude
				- ^  : negation operator to break the data
*/
//Toggle any string		
main() {
	char str[20];
	int i;
	
	printf("Enter name: ");
	scanf("%[^\n]",&str);
	
	for(i=0; i<20; i++) {
		if(str[i]>=97 && str[i]<=122) {
			str[i] -= 32;
		}
		else if(str[i]>=65 && str[i]<=90) {
			str[i] += 32;
		}
	}
	
	printf("String: %s",str);	
}
