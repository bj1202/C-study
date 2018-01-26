#include <stdio.h>

int main(void){
	
	int mn, sn = 700, bd = 500, ck = 400;
	int i, j, k;	

	printf("현제 당신이 소유하고 있는 금액: ");
	scanf("%d", &mn);
	printf("\n당신이 구입할 수 있는 것\n");
	
	for(i=1; i < mn / bd; i++){
		for(j=1; j < mn / sn; j++){
			for(k=1; k < mn / ck; k++){
				if(mn == sn * i + bd * j + ck * k){
					printf("크림빵 %d개, 새우깡 %d개, 콜라%d개\n",i ,j ,k);
				}	
			}
		}
	}
	return 0;
}
