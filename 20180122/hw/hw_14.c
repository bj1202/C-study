#include <stdio.h>

int acker(int x, int y){
	if(x == 0){
		return y + 1;
	}else if(x > 0 && y == 0){
		return acker(x - 1, 1);
	}else if(x > 0 && y > 0){
		return acker(x - 1, acker(x, y - 1));
	}
	
}

int main(void){
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d",acker(a,b));
	return 0;
}
