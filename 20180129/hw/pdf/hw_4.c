#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5
#define LIMIT 1222

int main(void){
	int i,j,k;
	int arrA[N][N];
	int arrB[N][N];
	int arrC[N][N];
	
	for(i = 0; i < N; i++){
		for(j = 0; j < N; j++){
			srand(time(NULL));
			arrA[i][j] = rand() % LIMIT;
			srand(time(NULL));
			arrB[i][j] = rand() % LIMIT;
		}
	}
	
	for(i = 0 ; i < N ; i++){
		for(j = 0 ; j < N ; j++){
			arrC[i][j] = 0;
			for(k = 0 ; k < N ; k++){
				arrC[i][j] += arrA[i][k] * arrB[j][k];
			}	
		}
	}
	for(i = 0 ; i < N ; i++){
		for(j = 0 ; j < N ; j++){
			printf("%d ",arrA[i][j]);
		}
		printf("\n");
	}
		printf("\n");
	for(i = 0 ; i < N ; i++){
		for(j = 0 ; j < N ; j++){
			printf("%d ",arrB[i][j]);
		}
		printf("\n");
	}
		printf("\n");
	for(i = 0 ; i < N ; i++){
		for(j = 0 ; j < N ; j++){
			printf("%d ",arrC[i][j]);
		}
		printf("\n");
	}
	return 0;
}
