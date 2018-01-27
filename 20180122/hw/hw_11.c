#include <stdio.h>

void printcm(int n){
	int i = 1;

	while(i < n){
		if(i % 3 == 0){
			printf("%d ",i);
			i++;
		}else if(i % 5 == 0 && i % 15 != 0){
			printf("%d ",i);
			i++;
		}else{
			i++;
		}
	}
	
}

int main(void){
	int num;

	scanf("%d",&num);
	printcm(num);
	return 0;
}
