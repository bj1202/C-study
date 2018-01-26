#include <stdio.h>

int main(void){
	int n, k = 0, i = 2;
	printf("공식 : 2^k <= n\n");
	printf("상수 n 입력: ");
	scanf("%d",&n);
	
	while(i <= n){
		i = i * 2;
		k++;
	}
	printf("공식을 만족하는 k의 최댓값은 %d",k);
	return 0;
}
