#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    if(n==1){
        printf("%d",arr[0]);
        return 0;
    }
    for(int i=n-2;i<=0;i++){
        if(arr[i]>=arr[i+1]){
            printf("%d ",arr[i]);
        }
    }
    printf("%d",arr[n-1]);
    return 0;
}