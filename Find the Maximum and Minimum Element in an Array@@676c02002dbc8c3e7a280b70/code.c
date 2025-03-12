#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int b=arr[0];
    int s=arr[n-1];
    for(int i=0;i<n;i++){
        if(arr[i]>=b){
            b=arr[i];
        }
    }
    for(int i=n-1;i>=0;i--){
        if(arr[i]<=s){
            s=arr[i];
        }
    }
    printf("%d %d",s,b);
    return 0;
}
