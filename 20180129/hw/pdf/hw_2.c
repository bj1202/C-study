#include <stdio.h>
#define SIZE 10
int ary[SIZE];
int a = 0;

void Push(int num);
void Pop();

int main(void){
	int num, i;
	for(i=0; i<SIZE; i++){
		scanf("%d",&num);
		Push(num);
	}
	for(i = 1 ; i <= SIZE; i++){
		Pop();
	}
	return 0;
}

void Push(int n){
	ary[a] = n;
	a++;
}
void Pop(){
	printf("%d\n",ary[a - 1]);
	a--;
}
