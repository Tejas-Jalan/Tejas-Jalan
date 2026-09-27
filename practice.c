#include <stdio.h>
int main(){
    int a=0,b=0,rev=0,org;
    printf("X=");
    scanf("%d",&a);
    org=a;
    while(a!=0){
        b= a % 10;
        rev=rev * 10 + b;
        a = a/10;
    }
    if(rev==org){
        printf("Pallindrome:%d",rev);
    }
    else{
        printf("Invalid");
    }
    return 0;
}