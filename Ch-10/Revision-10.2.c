#include<stdio.h>
#include<string.h>

/*
		String built in functions :
		
		gets(str);			=> input
		puts(str);			=> output
		
		strlen(str);		=> gives length
		
		strupr(str);		=> converts into uppercase
		strlwr(str);		=> converts into lowercase
		strrev(str);		=> reverse the string
	
		strcat(str1,str2);	=> merge the strings
		str1 = str1 + str2;
		strcpy(str1,str2);	=> copy the string
		str1 = str2;
		strcmp(str1,str2);	=> Compare the strings
							=> it can give either 0,1 or -1.
								-  same	=> 0
								-   s1 => small ASCII value
									s2 => higher ASCII value
									s1 - s2	
										=> -1
								- 	s1 => higher ASCII value
									s2 => lower ASCII value
									s1 - s2	
										=> 1

*/

main() {
	char fn[20],ln[20];
	int i,l;
	
	printf("Enter first name: ");
	gets(fn);
	printf("Enter last name : ");
	gets(ln);

	l = strcmp(fn,ln);
	
	printf("First name\t: ");
	puts(fn);
	printf("Last name\t: ");
	puts(ln);
	printf("Comparison: %d",l);
	
}
