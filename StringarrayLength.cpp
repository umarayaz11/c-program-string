#include<stdio.h>

int main() {
	
	int limit;
	
	printf("Enter a limit\n");
	scanf("%d",&limit);
	getchar();
	
	char str[];
	
	gets(str);
	
	//printf("%s",str);
	
	int i = 0;
	
	while(str[i] != '\0') {
		
		i++;
		
	}
	
	printf("The length of array is = %d",i);
	
}
