#include<stdio.h>

int main() {
	
	int rows = 3,cols = 2;
	int num;
	
	printf("Enter a number\n");
	scanf("%d",&num);
	
	int arr[rows][cols] = { {1,2},{3,4},{5,6} };
	
	for(int i = 0 ; i < rows ; i ++ ) {
		
		for(int j  = 0 ; j < cols ; j++) {
	
	       if(num == arr[i][j])		
			printf("%d%d\n ",i,j);
		}
	}
}
