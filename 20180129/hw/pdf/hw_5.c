#include <stdio.h>
#include <string.h>

#define SIZE 10

int palind(char arr[]);

int main(void){
	char str[SIZE];

	printf("문자열 입력: ");
	scanf("%s",&str);
	palind(str);
	
	return 0;
}

int palind(char arr[]){
	int len = strlen(arr);
	int i=0, j = len-1, k, t;
	for(k = 0 ; k < len/2 ; k++){
		if(arr[i] < arr[j]){
			t = arr[i];
			arr[i] = arr[j];
			arr[j] = t;
		}
		if(arr[i] - 32 == arr[j] || arr[i] == arr[j]){
			i++;
			j--;
		}else{
			printf("Not a palindrome\n");
			return 0;
		}
	}
	printf("palindrome\n");
	return 0;
}
