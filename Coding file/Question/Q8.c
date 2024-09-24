// #include<stdio.h>

// int main(){
//     int isSunday = 1;
//     int isSnowing = 1;
//     printf("%d \n", isSunday && isSnowing); //condition is ture then output is 1.
//     return 0;
//     }
// #include<stdio.h>

// int main(){
//     int isMonday = 1;
//     int isRaining = 0;
//     printf("%d \n", isMonday || isRaining); //condition is ture then output is 1.
//     return 0;
//     }

#include<stdio.h>

int main(){
    int x;
    printf("enter the value of x");
    scanf("%d", &x);
    printf("%d \n",(x > 9) && (x < 100));
    return 0;
}