#include<stdio.h>
int main(){
    int n,b;
    scanf("%d %d",&n,&b);
    int str[32];
    int i=0;
    while(n>0){
        str[i]=n%2;
        n=n/2;
        i++;
    }
    printf("%d",str[b]);
    return 0;

}