#include <stdio.h>

int main(void){
	int A, B = 0, num;
	//ABAB + BABA = num;
	
	scanf("%d", &num);
	for(A = 0;A < 10; A++){
		for(B=0; B<10 ; B++){
			if(A*1000+B*100+A*10+B*1 + B*1000+A*100+B*10+A*1 == num){
				printf("A = %d , B = %d \n", A ,B);
}
		}
	}
	return 0;
}
