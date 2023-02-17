#include<stdio.h>

main() {
	int n;
	
	printf("Enter n: ");
	scanf("%d",&n);
	
	int a[n],len=0,i;
	
	for(i=0; i<n; i++) {
		printf("Enter a[%d]: ",i);
		scanf("%d",&a[i]);
		len++;
	}
	
	for(i=0; i<n; i++) printf("a[%d]: %d\n",i,a[i]);
	
	printf("Length of array: %d",len);
	
}
