#include <stdio.h>

int main(){
    int marks;
    printf("enter the marks");
    scanf("%d", &marks);
    if(marks >= 30 && marks < 70){
        printf("congrss you got B grade");
    }else if(marks >=70 && marks < 90){
        printf("congress you got A garde");
    }else if(marks >=90 && marks < 100){
        printf("congress you got A+ grade");
    } else if(marks>100){
        printf("enter correct number");
    }else{
        printf("oops! sorry you are fail");
    }   
    return 0;
}