//table of any number

#include<stdio.h>

int main(){
    int n;
    printf("enter a number which you want a table");
    scanf("%d", &n);

    
    for (int i = 1; i <= 10;i++){
        printf("%d \n", i * n);
    }

    return 0;
}