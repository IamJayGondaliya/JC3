#include<stdio.h>

/*
		Recursion :
			- function calls itself.
			
			void main() {
				printf("Main\n");
				main();
			}
			
			Factoriyal :
				5!
				
				5 * 4 * 3 * 2 * 1
				
				120
				
				
				-45/0/1				
				-N, 0, 1	=> 1
*/

void loop(int,int,int);
int fact(int);

void main() {
	int n,res;
	
	printf("Enter value: ");
	scanf("%d",&n);
	
	res = fact(n);// 5
	
	printf("Factoriyal of %d: %d",n,res);	// 1
}

int fact(int n) {		//5, 4, 3, 2, 1
	if(n<=1) {	// 5<=1, 4<=1, 3<=1, 2<=1, 1<=1
		return 1;
	}
	else {
		return n * fact(n-1);
		//     5 * fact(4)					=> 24*5 => 120
		//         4 * fact(3)				=> 6*4	=> 24
		//			   3 * fact(2)			=> 2*3	=> 6
		//				   2 * fact(1)		=> 2*1	=> 2
		//					   1			=> 1
	}
}

void loop(int i,int n,int g) {
	printf("Value: %d\n",i);
	if(i>n) {
		i -= g;
		if(i>n) {
			loop(i,n,g);
		}		
	}
	else {
		i += g;
		if(i<n) {
			loop(i,n,g);
		}
	}
}
