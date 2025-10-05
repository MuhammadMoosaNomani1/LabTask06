#include<stdio.h>
#include<stdlib.h>
int main(){
	int n;
	printf("Enter a Number:-\n");
	scanf("%d", &n);
	
	if(n== 0 || n==1){
		n=1;
		printf("Factorial of 0 or 1 is %d", n);
		exit(0);
	}
	
	int r=n;
	for(int i=1; i<=(r-1); i++){
		n=n*(r-i);
	}
	printf("Factorial of %d is %d\n", r,n);
return 0;
}
