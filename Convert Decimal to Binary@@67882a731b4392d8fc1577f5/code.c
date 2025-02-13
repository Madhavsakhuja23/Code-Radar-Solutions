#include<stdio.h>
int main(){
    int a,s[32],i=0;
    scanf("%d",&a);
    while(a>0){
        s[i]=n%2;
        i++;
        n=n/2;
    }
    for(int j=i;j>0;j--){
        printf("%d",s[j]);
    }
    return 0;
}