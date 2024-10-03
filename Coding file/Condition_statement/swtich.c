#include<stdio.h>

int main(){
    int day;
    printf("enter day(1-7)");
    scanf("%d", &day);
    switch (day)
    {
    case 1:printf("today is monday \n");
            break;
    case 2:printf("today is tuesday \n");
            break;
    case 3:printf("today is wednesday \n");
            break;
    case 4:printf("today is thursday \n");
            break;
    case 5:printf("today is friday \n");
            break;
    case 6:printf("today is saturday \n");
            break;
    case 7:printf("today is Sunday \n");
            break;
    default:
        printf("enter correct number");
        break;
    }
    return 0;
}