#include <stdio.h>

int factorial(int n){
	if(n == 1){
		return 1;
	}	
	return n = n * factorial(n - 1);
}

int main(void){
	int num;

	scanf("%d",&num);
	printf("%d! = %d \n",num ,factorial(num));
	return 0;
}
