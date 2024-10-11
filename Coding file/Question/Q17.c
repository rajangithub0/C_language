// odd number to exit

#include<stdio.h>

int main(){
    int n;
    do
    {
        printf("enter a number");
        scanf("%d", &n);
        printf("%d \n", n);
        if (n%2 !=0){
            break;
        }        
    } while (1);

    printf("thank you all above number is even number");
    return 0;
}