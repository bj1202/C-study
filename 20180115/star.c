#include <stdio.h>

int main(){

	int a, b, c;
	
	scanf("%d",&b);

	for(a=0 ; a < b ; a++){
		printf("\n");
		
		for(c=0; c <= a ; c++){
			printf("*");
		}
	}
return 0;
}
