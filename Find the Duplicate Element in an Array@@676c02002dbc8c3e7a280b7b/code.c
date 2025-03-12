#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int d=arr[0];
    for(int i=0;i<n;i++){
        if(d==arr[i]){
            printf("%d",d);
        }
        else{
            d=arr[i+1];
        }
    }
}