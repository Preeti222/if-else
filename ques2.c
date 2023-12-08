int main(){
    int num1,num2,num3;
    printf("enter the value of num1,num2 and num3");
    scanf("%d%d%d",&num1,&num2,&num3);
    if(num1>num2 && num1>num3){
        printf("num1 is maximum : %d",num1);
    }else if (num2>num1 && num2>num3){
        printf("num2 is greater : %d",num2);
    }else{
        printf("num3 is greter : %d",num3);
    }
    return 0;
}