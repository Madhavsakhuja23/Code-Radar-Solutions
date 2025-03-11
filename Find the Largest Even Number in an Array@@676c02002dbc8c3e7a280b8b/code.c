#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int b;
    b=arr[0];
    for(int j=0;j<n;j++){
        if(arr[j]%2==0){
            if(arr[j]>b){
                b=arr[j];
            }
        }
    }
    printf("%d",b);
    return 0;
}