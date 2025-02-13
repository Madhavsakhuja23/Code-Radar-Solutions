#include<stdio.h>
int main(){
    int a,s[32],i=0;
    scanf("%d",&a);
    if(a==0){
        printf("0");
    }
    else{
    while(a>0){
        s[i]=a%2;
        i++;
        a=a/2;
    }
    for(int j=i;j>=0;j--){
        printf("%d",s[j]);
    }
    }
    return 0;
}