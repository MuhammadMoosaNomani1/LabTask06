#include<stdio.h>
int main(){
	int password;
	int actualpass=1234;
	do{
		printf("Enter the password");
		scanf("%d", &password);
	} while(password!=actualpass);
	
	printf("Access granted");
	return 0;
}
