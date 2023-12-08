int main(){
    char a;
    printf("enter the character \n");
    scanf("%c",&a);
    if((a>='a'&&a<='z') || (a>='A'&&a<='Z')){
        printf("this is alphabet: %c",a);
    }else{
        printf("this is not alphabet: %c",a);
    }
    return 0;
}