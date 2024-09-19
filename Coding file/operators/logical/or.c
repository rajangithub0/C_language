#include <stdio.h>

int main(){
    printf("%d \n", 3 > 4 || 5 > 2); // using or operator both condition is ture then output is ture in case one case is ture and anothor one is false then output is ture in case of both condition is false then output is false
    printf("%d \n", 6 > 5 || 5 > 2); //one condition is false second one is ture then output is ture
    printf("%d \n", 5 > 2 || 6 > 5); //one condition is ture second is false then output is ture
    printf("%d \n", 3 > 5 || 4 > 5);// both condition is false then output is false
    return 0;
}