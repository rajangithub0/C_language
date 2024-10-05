#include<stdio.h>

int main(){
    int marks;
    printf("enter marks for student (0-100):");
    scanf("%d", &marks);

    marks <= 30 ? printf("fail") : printf("pass");
    

    // if(marks>=30 && marks<=100){
    //     printf("student is passed \n");
    // }else if(marks<=29 && marks >=0){
    //     printf("student is fail \n");
    // }else{
    //     printf("wrong mrks");
    // }
    
    return 0; 
}