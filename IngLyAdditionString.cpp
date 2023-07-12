#include<stdio.h>

int main() {
	
	char str[100];
	
	gets(str);
	
	int len = 0;
	
	while(str[len] != '\0') {
		
		len++;
		
	}
	
	if (len >= 3) {
    if (str[len - 3] == 'i' && str[len - 2] == 'n' && str[len - 1] == 'g') {
        str[len] = 'l';
        str[len + 1] = 'y';
        str[len + 2] = '\0';
        //printf("%s\n", str);
        
    }
    else {
    	str[len] = 'i';
        str[len + 1] = 'n';
        str[len + 2] = 'g';
        str[len + 3] = '\0';
        
	}
	
}
    printf("%s\n", str);    
	
	}
