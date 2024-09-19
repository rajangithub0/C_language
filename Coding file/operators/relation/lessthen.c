#include<stdio.h>
#include<math.h>

int main() {
    printf("%d \n", 3 < 3); // condition is false then output is 0 because 3<3 three is not less for value then condition is ture
    printf("%d \n", 3 <= 3); //condition is true then output is 1 because 3<=3 this is not less then but this is equal conditon is ture
    printf("%d \n ", 4 < 5); //condition is ture output is 1
    printf("%d \n", 5 < 4); //condition is false output is 0
    return 0;
}