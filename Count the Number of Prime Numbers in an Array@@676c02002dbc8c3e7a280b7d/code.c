#include<stdio.h>
int prime(int n){
    if(n<2){
        return 0;
    }
    for(int i=2;i<n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int c=0;
    for(int i=0;i<n;i++){
        if(prime(arr[i])==1){
            c++;
        }
    }
    printf("%d",c);
    return 0;
}