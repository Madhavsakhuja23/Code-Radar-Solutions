#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    int temp[n];
    for(int i=0;i<n;i++){
        temp[i]=arr[n-1-i];
    }
    for(int i=0;i<k-1;i++){
        temp[i]=temp[k-1-i];
    }
    for(int i=k;i<n;i++){
        temp[i]=temp[n-1-i];
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}