#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    gets(str);
    printf("%d",strlen(str));
    return 0;
}