#include <stdio.h>

int main(void){
	int num[10] = {};
	int i, j = 0, k = 0;
	int size_hol, size_jjak;
	int hol[10] = {}, jjak[10] = {};
	for(i = 0; i < 10; i++){
		printf("입력 : ");
		scanf("%d",&num[i]);
		if(num[i] % 2 == 1){
			hol[j] = num[i];
			j++;
		}else if(num[i] % 2 == 0){
			jjak[k] = num[i];
			k++;
		}
	}
	size_hol = sizeof(hol) / sizeof(int);
	size_jjak = sizeof(jjak) / sizeof(int);
	printf("홀수 출력 : ");
	for(i = 0; i < size_hol; i++){
		printf("%d ", hol[i]);
		if(hol[i] == 0){
			printf("\b\b");
		}
	}
	printf("짝수 출력 : ");
	for(i = 0; i < size_jjak; i++){
		printf("%d ", jjak[i]);
		if(k <= i){
			printf("\b\b");
		}
	}
	
	return 0;
}
