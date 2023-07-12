#include <stdio.h>

int CaeserCipher(char ch[],int length,int move,int words,int sentences,int specialChars);
int len(char arr[]);

int main() {
           
           char ch[100];
           int length,move,words = 0,sentences = 0,special_chars = 0;
           
           printf("Enter the number of movements of Characters: ");
           scanf("%d",&move);
           getchar();
           printf("Enter your message: ");
           gets(ch);
           
         length = len(ch);
         CaeserCipher(ch,length,move,words,sentences,special_chars);
          
          
}

int len(char arr[]) {
   
   int i = 0;
   
   while(arr[i] != '\0') {
   	
   	i++;
   }
   return i;
   }

int CaeserCipher(char ch[],int length,int move,int words,int sentences,int specialChars) {
	
	    
        int charr;
        
		 for(int i = 0;i < length; i++) {
		 	
		 	if(ch[i] >= 'A' && ch[i] <= 'Z') {
		 		 charr = ch[i] + move;
		 		if(charr > 90){
				 
		 		ch[i] =64 + charr % 90;
		 	}else {
		 		ch[i] = charr;//D
			 }
			 }
			 else if(ch[i] >= 'a' && ch[i] <= 'z') {
			 	 charr = ch[i] + move;
		 		if(charr > 122){
				 
		 		ch[i] =96 + charr % 122;
		 	}else {
		 		ch[i] = charr;//c
			 }
			 }
			 
			 else if(ch[i] >= '0' && ch[i] <= '9') {
			 	 charr = ch[i] + move;
		 		if(charr > 57){
				 
		 		ch[i] =47 + charr % 57;//1
		 	}else {
		 		ch[i] = charr;
			 }
			 }
			 else if(ch[i] == '.') {
			 	
			 	sentences++;
			 }
			 else{
			 	words++;
			 }
			 
			 printf("%c",ch[i]);
		 }
		 }

