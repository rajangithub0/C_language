#include<stdio.h>

int main(){
    int age;
    printf("enter the age:");
    scanf("%d", &age);
    if(age>18){
        // if we write only one statement in if block donot need to required curle brecket
        printf("this user is vaild for make email \n");
    }else{
        printf("this user is not vaild for make email \n");
    }
    printf("thank you! \n");
    return 0;
}