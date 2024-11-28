#include<stdio.h>
int main(){
	int array[3][2]={{2, 3},{1, 4},{5, 7}};
	for(int i = 2; i >= 0; i--){
		for(int j = 1; j >= 0; j--){
			printf("%d ", array[i][j]);
		}
		printf("\n");
	}
	return 0;
}
