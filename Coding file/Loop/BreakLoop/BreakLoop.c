#include<stdio.h>

int main(){

    for (int i = 1; i <= 10;i++){
        if(i==3){
            break;
        }
        printf("%d ", i);
    }
    printf("end");
    return 0;
}