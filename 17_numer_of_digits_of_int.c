#include<stdio.h>
int main(){
    int n,reverse=0,r,num=0,original_value;
    printf("Enter a number->");
    scanf("%d",&n);
    original_value=n;
    while(n!=0){
        r=n%10;
        reverse=reverse*10+r;
        n=n/10;
        num++;
    }
    
    printf("\nNumber of digits in %d-> %d",original_value,num++);
    
    return 0;
}