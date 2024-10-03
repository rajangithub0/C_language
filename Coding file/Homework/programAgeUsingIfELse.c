#include<stdio.h>

int main(){
    int age;
    printf("enter the age");
    scanf("%d", &age);
    if(age>=18 &&age<=20){
        printf("applied for collage \n");
    }else if(age>=24 &&age <=21){
        printf("applied for job ");
    }else if(age>25){
        printf("show experince");
    }else{
        printf("complte your education");
    }
    return 0;
}