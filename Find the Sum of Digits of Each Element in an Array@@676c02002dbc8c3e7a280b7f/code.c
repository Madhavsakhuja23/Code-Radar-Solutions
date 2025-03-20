#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n],arr1[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        int temp =arr[i];
        int s=0;
        while(temp>0){
            s=s+temp%10;
            temp=temp/10;
        }
        arr1[i]=s;
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr1[i]);
    }
    return 0;
}