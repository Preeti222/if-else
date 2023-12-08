#include<stdio.h>
int main(){
    int year;
    printf("enter the value of year \n");
    scanf("%d",&year);
    if (((year % 4 == 0) && (year % 100 !=0)) || (year % 400==0)){
        printf("year is leap year: %d",year);
    }else{
        printf("common year: %d",year);
    }
    return 0;
}
