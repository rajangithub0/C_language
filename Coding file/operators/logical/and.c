#include<stdio.h>

int main(){
    printf("%d \n", 4 > 3 && 5 > 2);//using and operater both condition is ture then output is ture in case one condition is false output is false .both condition is false output is false.
    printf("%d \n", 3 > 5 && 5 > 2); // in this case one condition is false and second one is ture then output is false
    printf("%d \n", 5 > 2 && 3 > 5);// in this case one condition is ture and second one is false then output is false
    printf("%d \n", 3 > 4 && 2 > 4); // in this case both condition is false then output is false
    return 0;
}