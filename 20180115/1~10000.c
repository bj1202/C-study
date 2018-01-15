#include <stdio.h>

int main(){

	int a, b;
	b = 0;

	for(a=1 ; a <= 10000; a++){
		b = b + a;
	}
	printf("%d",b);
	return 0;
}
