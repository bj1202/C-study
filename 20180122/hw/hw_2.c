#include <stdio.h>

void gugudan(int a, int b){
	int c;
	for(a ; a < b+1; a++){
		for(c = 1 ; c < 10; c++){
			printf("%d * %d = %d\n",a, c, a*c);
		}
	}
}
int main(void){
	
	int x, y, t;
	scanf("%d %d",&x, &y);
	if(x > y){
		t = y;
		y = x;
		x = t;
		gugudan(x,y); 
	}else{
		gugudan(x,y);
	}
	return 0;
}
