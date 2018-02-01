#include <stdio.h>

int main(void){
	int num;
	int two[10] = {};
	int i, j;
	scanf("%d", &num);
	for(i = 0; num > 0; i++ ){
		two[i] = num % 2;
		num = num / 2;
	}
	for(i ; i >= 0; i--){
		printf("%d",two[i]);
	}
	
	return 0;
}
