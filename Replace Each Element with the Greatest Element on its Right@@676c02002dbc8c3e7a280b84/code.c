#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(i==n-1){
            arr[i]=-1;
        }
        else{
            for(int j=i+1;j<n;j++){
                if(arr[j]>arr[i]){
                    arr[i]=arr[j];
                }
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}