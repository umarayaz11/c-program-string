#include<stdio.h>

int subStringIndex(char str1[],char str2[],int len, int len2);
int main() {
	
	char str[100];
	char substr[20];
	int len1,len2;
	printf("Enter the length of first string\n");
	scanf("%d",&len1);
	printf("Enter the length of 2nd string\n");
	scanf("%d",&len2);
	
    getchar();	
    printf("Enter string: ");
	fgets(str,len1 + 2,stdin);
	
	printf("Enter substring: ");
	fgets(substr,len2 + 1,stdin);
	
	subStringIndex(str,substr,len1,len2);
	
	return 0;
	
	
	
}


int subStringIndex(char str1[],char str2[],int len, int len2) {
	
	for(int i = 0 ; i < len2 - 1 ; i++) {
		
		for(int j = 0 ; j < len; j++) {
		
		
		if(str2[i] == str1[j]) {
        
        printf("%c liens on index %d\n",str2[i],j);
			}
			
		}
	}
	
	}
