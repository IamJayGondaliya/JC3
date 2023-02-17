#include<stdio.h>

main(){
 	
	int n;
	printf("enter the value of n :");
	scanf("%d",&n);
	
	int a[n],i;
	
	for(i=0;i<n;i++){
		printf("a[%d] :",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++){
//		printf("\n%d",a[i]);
		if(a[i]<0){
			printf("the negative value is %d\n",a[i]);
		}		
		else{
			printf("");
		}
	}
}

