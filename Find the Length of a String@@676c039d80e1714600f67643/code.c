#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    fgets(str, sizeof(str), stdin);
    printf("%d",strlen(str));
    return 0;
}