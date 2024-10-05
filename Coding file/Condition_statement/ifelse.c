#include<stdio.h>

int main(){
    int number;
    printf("enter a number : ");
    scanf("%d", &number);
    if(number>=0){
        printf("this number is postive \n");
        if(number%2==0){
            printf("even number postive \n");
        }else{
            printf("odd number postive \n");
        }
    }else{
        if(number<=0){
            printf("this number is negative \n");
        }if(number%2==0){
            printf("even number negative \n");
        }else{
            printf("odd number negative \n");
        }
    }
    return 0;
}