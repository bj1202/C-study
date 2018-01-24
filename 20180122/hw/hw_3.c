#include <stdio.h>

int main(void){

	int x, y, z, t;
	scanf("%d %d",&x ,&y);
	if(x < y){
		t = y;
		y = x;
		x = t;
	}
	while(y != 0){
		z = x % y;
		x = y;
		y = z;
	}
	printf("%d",x);
	return 0;
}
