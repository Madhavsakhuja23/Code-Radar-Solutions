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
    int c = 0;
    for(int j=0;j<n;j++){
        if(arr[j]%2==0){
            c++;
            if(arr[j]>b){
                b=arr[j];
            }
        }
    }
    if(c>0){
        printf("%d",b);
    }
    else{
        printf("-1");
    }
    return 0;
}