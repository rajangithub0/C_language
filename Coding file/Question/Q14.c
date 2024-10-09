#include<stdio.h>

int main(){
    int n ;
    printf("enter the number");
    scanf("%d", &n);

    for (int i = 1; i <= n;i++){
        printf("%d \n", i);
    }
        // int i = 1;
        // while (i < n)
        // {
        //     printf("%d \n",i);
        //     i++;
        // }
    return 0;
}