#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<2*n-1;i++){
        if(i<n-1){
            for(int k=0;k<n-i-1;k++){
                printf(" ");
            }
            for(int j=0;j<2*i+1;j++){
                printf("*");
            }
            printf("\n");
        }
        if(i>=n-1){
            for(int k=0;k<n-i-1;k++){
                printf(" ");
            }
            for(int j=0;j<2*i-1;j++){
                printf("*");
            }
            printf("\n");
        }
    }
}