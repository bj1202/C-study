#include <stdio.h>
#include <string.h>
#define SIZE 1000
char str[SIZE];
int len;

void Push();
void Pop();

int main(void){
	
	Push();
	Pop();

	return 0;
}

void Push(){
	scanf("%s",&str);
	len = strlen(str);
}
void Pop(){	
	int i, j = len - 1;
	for(i = 0 ; i < len ; i++){
		printf("%c",str[j]);
		j--;
	}
}
