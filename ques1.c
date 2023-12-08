#include<stdio.h>
int main(){
    int num1,num2;
    printf("Enter the value of num 1 and num 2 \n");
    scanf("%d%d",&num1,&num2);
    if (num1>num2){
        printf("%d num1 is greater",num1);
    }
    else if(num1==num2){
        printf("%d num1 is equal to num2");
    }else{
        printf("%d num2 is maximum",num2);
    }
    return 0;
}