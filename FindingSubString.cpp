#include<stdio.h>

int subStringIndex(char str1[],char str2[],int len);
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
	fgets(str,len1,stdin);
	printf("Enter substring: ");
	fgets(substr,len2,stdin);
	
	int index;
     index = subStringIndex(str,substr,len1);
	
	if(index != -1)
	printf("The first occurance lies on index %d",index);
	else
	     printf("There is no matching element\n");	
	
	return 0;
	
	
	
	
}


int subStringIndex(char str1[],char str2[],int len) {
	
	for(int i = 0; i < len; i++) {
		
		if(str2[0] == str1[i]) {
			
			return i;
		}
	}
	
	return - 1;
}
