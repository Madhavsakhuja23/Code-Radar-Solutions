#include<stdio.h>
#include <limits.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int l=arr[0],sl=INT_MIN;
    for(int i=1;i<n;i++){
        if(arr[i]>l){
            sl=l;
            l=arr[i];
        }
        else if(arr[i]>sl && arr[i]!=l){
            sl=arr[i];
        }
    }
    if(sl==INT_MIN){
        printf("-1");
    }
    else{
        printf("%d",sl);
    }
    return 0;
}