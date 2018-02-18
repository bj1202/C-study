#include <stdio.h>

void palindnum(void);

int main(void){
		
	palindnum();
	return 0;
}

void palindnum(void){
	int i, j, k;
	int a;
	char arr[5];
	
	for(i = 1; i < 10 ; i++){
		arr[0] = arr[4] = i;
		for(j = 0 ; j < 10 ; j++){
		arr[1] = arr[3] = j;
			for(k = 0 ; k < 10; k++){
			arr[2] = k;
				for(a = 0; a < 5; a++){
					printf("%d",arr[a]);
				}
			printf("\n");
			}
		}
	}
}
