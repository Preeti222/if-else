int main(){
    int num;
    printf("enter the value of num \n");
    scanf("%d",&num);
    if (num>0){
        printf("num is positive: %d",num);
    }else if(num<0){
        printf("num is negative: %d",num);
    }else{
        printf("num is zero: %d",num);
    }
    return 0;
}