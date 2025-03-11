#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    if(n%2==0){
        int s=0;
        for(int j=0;j<n;j++){
            s=s+arr[j];
        }
        printf("%d",s/n);
    }
    else{
        int k =n/2;
        printf("%d",arr[k]);
    }
    return 0;
}