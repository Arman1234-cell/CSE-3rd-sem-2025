#include<stdio.h>

int main(){
    int n,reverse=0,r,sum=0;
    printf("Enter a number->");
    scanf("%d",&n);
    while(n!=0){
        r=n%10;
        reverse=reverse*10+r;
        n=n/10;
        sum=sum+r;
    }
    printf("sum is->%d",sum);
    

    return 0;
}
