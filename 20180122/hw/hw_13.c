#include <stdio.h>

//1 , 1 , 2 ,3 ,5, 8, 13 ,......
int fibo(int n){
	int i, a = 1, b = 1, c = 0;
		
	for(i = 1; i <= n; i++){
		a = b + c;
		b = c;
		c = a;
	}
	return a;
}

int main(void){
	int num;
		
	scanf("%d",&num);
	printf("%d",fibo(num));
	return 0;
}
