#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int l=arr[0],sl=-1;
    for(int i=1;i<n;i++){
        if(arr[i]>l){
            sl=l;
            l=arr[i];
        }
        else if(arr[i]>sl && arr[i]<l){
            sl=arr[i];
        }
    }
    printf("%d",sl);
    return 0;
}