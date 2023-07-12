#include<stdio.h>
#include<string.h>

int main() {
	
	
	char str1[100];
	char str2[20];
	
	printf("Enter string 1: ");
	gets(str1);
	
	
	
	printf("Enter substring : ");
	gets(str2);
	
	int index[20];
	//haw are you
	//are
	
	for(int i = 0; strlen(str1) ; i++) {
	    
		int count = 0;
			
		for(int j = 0;j < strlen(str2); j++) {
			
			if(str1[i + j] == str2[j]) {
				
				count++;//1
				index[j] = i + j;//a
			}
			else{
				break;
			}
		}
		if(count == strlen(str2)) {
			
			break;
		}
	}
	printf("The indexes of substring are : ");
	for(int i = 0 ; i < strlen(str2) ; i++) {
		
		printf("%d ",index[i]);
	}
}
