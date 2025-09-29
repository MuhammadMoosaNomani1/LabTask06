#include<stdio.h>
int main(){
	int n, i;
unsigned long long fact=1;

printf("Enter a number");
scanf("%d", &n);

  if (n < 0) printf("Factorial is not defined for negative numbers");
  else {
  	for(i=1;i<=n;i++)
    fact*=i;
  }
  printf("FACTORIAL OF %d = %llu\n", n, fact);
  return 0;
}
