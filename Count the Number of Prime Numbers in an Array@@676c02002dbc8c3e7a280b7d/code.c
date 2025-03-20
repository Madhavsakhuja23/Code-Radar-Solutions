#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n],prime=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]==2){
            prime++;
            continue;
        }
        for(int j=2;j<arr[i];j++){
            if(arr[i]%j==0){
                continue;
            }
        }
        prime++;
    }
    printf("%d",prime);
    return 0;
}