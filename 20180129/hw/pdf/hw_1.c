#include <stdio.h>
#define SIZE 12

double Avg(int ary[]);

int main(void){
	int arr[SIZE];
	int i;
	double avg;
	
	for(i = 0 ; i < SIZE; i++){
		scanf("%d",&arr[i]);
	}
	avg = Avg(arr);
	printf("평균 %.1f",avg);
	
	return 0;
}

double Avg(int ary[]){
	int i;
	int min, max;
	int add = 0;
	double avg;
	for(i = 0 ; i < SIZE - 1; i++){
		if(ary[i] < ary[i+1]){
			max = ary[i+1];	
			min = ary[i];	
		}else if(ary[i] > ary[i+1]){
			max = ary[i];
			min = ary[i+1];
		}
	}
	for(i = 0; i < SIZE ; i++){
		add = add + ary[i];
	}
	return avg =(double)(add - min - max) / (SIZE - 2);
}
