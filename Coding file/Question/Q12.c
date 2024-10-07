#include<stdio.h>

int main(){
    char ch;
    printf("enter a character");
    scanf("%c", &ch);

    if(ch >= 'A' && ch <= 'Z'){
        printf("this character is upper case");
    }else if(ch >='a' && ch<='z'){
        printf("this character is lower case");
    }else{
        printf("enter correct character this is not english latter");
    }
    return 0;
}