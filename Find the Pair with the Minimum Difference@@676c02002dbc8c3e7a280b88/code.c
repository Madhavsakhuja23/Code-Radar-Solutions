#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
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
    d1=arr[n-1]-arr[n-2];
    d2=arr[1]-arr[0];
    if(d1>d2){
        printf("%d",d2);
    }
    else{
        printf("%d",d1);
    }
    return 0;
}