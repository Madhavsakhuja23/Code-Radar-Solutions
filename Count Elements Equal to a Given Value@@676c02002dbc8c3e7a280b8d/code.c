#include<stdio.h>
int main(){
    int n,n1;
    scanf("%d %d",&n,&n1);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",arr[i]);
    }
    int n2=0;
    for(int j=0;j<n;j++){
        if(arr[j]==n1){
            n2++;
        }
    }
    printf("%d",n2);
    return 0;
}