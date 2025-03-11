#include<stdio.h>
int main(){
    int n,n1;
    scanf("%d %d",&n,&n1);
    int arr[n];
    for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int b=0;
    for(int j=0;j<n;j++){
        if(arr[j]>n1){
            b++;
        }
    }
    printf("%d",b);
    return 0;
}