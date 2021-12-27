#include<stdio.h>
#include<stdlib.h>

int len(char str[])
    {
        int i;
        for (i = 0; str[i] != '\0'; ++i);
        return i;
    }

char *input(FILE *fp, int size){
char *str = malloc(sizeof(char) * size);
int c;
int len=0;
while(EOF != (c = fgetc(fp)) && c != '\n'){
str[len++]=c;
if(len==size){
str = realloc(str, sizeof(char) * (size *= 2));
}
}
str[len++] = '\0';
return realloc(str, sizeof(char) * len);
}
int main(){
char *string;  
int strLen;
printf("\nEnter a string: ");
string=input(stdin,100); 
strLen=len(string);
printf("\nThe length of the string : %d\n",strLen); 
return 0;
}


