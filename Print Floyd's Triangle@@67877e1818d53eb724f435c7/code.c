#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n){
        for(int j=1;j<=i;j++){
            printf("%d ",i);
            i++;
        }
        printf("\n");
    }
    return 0;
}