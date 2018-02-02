#include <stdio.h>
#include <string.h>

int palind(char ary[]){
	int len = strlen(ary);
	int i=0, j= len-1, k;
	for(k = 0 ; k < len/2 ; k++){
		if(ary[i] == ary[j]){
			i++;
			j--;
		}else{
			printf("회문이 아닙니다.");
			return 0;
		}
	}
	printf("회문 입니다.");
	return 0;
}

int main(void){
	char str[10];
	
	printf("문자열 입력: ");
	scanf("%s",&str);
	palind(str);
	return 0;
}
