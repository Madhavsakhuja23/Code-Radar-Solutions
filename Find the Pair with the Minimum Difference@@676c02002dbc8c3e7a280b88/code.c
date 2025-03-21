#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n==1){
        printf("-1");
        return 0;
    }
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int d;
    scanf("%d",&d);
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp =arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    int d1=arr[n-1]-arr[n-2];
    int d2=arr[1]-arr[0];
    if(d1>d2){
        printf("%d %d",arr[0],arr[1]);
    }
    else{
        printf("%d %d",arr[n-2],arr[n-1]);
    }
    return 0;
}