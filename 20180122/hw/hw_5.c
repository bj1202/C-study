#include <stdio.h>

int main(void){
	int num = 2, i = 1;
	while(i <= 10){
		if(num == 2 ||num == 3 ||num == 5 ||num == 7){
			printf("%d ",num);
			i++;
			num++;
		}
		else if(num % 2 != 0&&num % 3 != 0&&num % 5 != 0&&num % 7 !=			 0){
			printf("%d ",num);
			i++;
			num++;
		}else{
			num++;
		}
	}
	return 0;
}
