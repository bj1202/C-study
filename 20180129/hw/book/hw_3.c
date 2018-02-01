#include <stdio.h>
#define SIZE 10

int main(void){
	int num;
	int array[SIZE] = {};
	int i, j = 0, k = SIZE, t;
	for(i = 0 ; i < SIZE; i++){
		scanf("%d",&num);
		if(num % 2 == 1){
			array[j] = num;
			j++;
		} else{
			array[k-1] = num;
			k--;
		}
	}
	for(i = 0 ; i < SIZE; i++){
		printf("%d ",array[i]);
	}
	return 0;
}
