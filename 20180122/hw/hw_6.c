#include <stdio.h>

int main(void){
	int h, m, s;
	printf("초(second)입력 : ");
	scanf("%d",&s);
	h = s / 3600;
	m = (s % 3600) / 60;
	s = h % 3600;

	printf("[h: %d, m: %d, s: %d]",h ,m ,s);
	return 0;
}
