#include <stdio.h>

int zegob(int r, int z){
	if(z == 0)
		return 1;
	return r = r * zegob(r , z - 1);
}
int main(void){
	int n, i;
	printf("정수 입력: ");
	scanf("%d",&n);	
	printf("2의 %d승은 %d", n , zegob(2 , n));
	return 0;
}
