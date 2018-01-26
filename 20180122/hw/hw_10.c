#include <stdio.h>

void printmul(void){
	int i = 1, j;
	
	while(i < 10){
		j = 1;
		while(j < 10){
			printf("%d * %d = %d\n",i,j,i*j);
			j++;
		}
	i++;
	}
}
int main(void){
	
	printmul();
	return 0;
}
