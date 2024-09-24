#include<stdio.h>

int main(){
    int marks;
    printf("enter the marks");
    scanf("%d", &marks);

    if(marks>=90){
        printf("hurry! you passed with A grade \n");
    } else if ( marks>=70 && marks<=90){
        printf("congress! you passed second division in class");
    }
    else {
        printf("you passed");
    }
    
    return 0;

}