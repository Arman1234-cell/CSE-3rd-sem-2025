#include<stdio.h>
#include<string.h>
int main(){
    char string1[]="arman";
    char string2[]=" ullah";
    strcat(string1,string2);
    printf("string after append->%s",string1);
}