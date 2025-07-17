#include<stdio.h>
#include<stdbool.h>
int main(){

    int n,i;
    bool flag;
    printf("Enter a number->");
    scanf("%d",&n);
    flag=false;
    if(n==0 || n==1){
        flag=true;
    }
    else{
        for(i=2;i<n;i++){
            if(n%i==0){
                flag=true;
                break;
            }
        }
    }
    if(flag){
        printf("%d is not prime",n);
    }
    else{
        printf("%d is prime",n);
    }
    return 0;
}