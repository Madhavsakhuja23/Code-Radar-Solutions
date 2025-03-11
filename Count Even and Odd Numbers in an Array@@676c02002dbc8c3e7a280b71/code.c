#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++){
        scanf("%d",arr[i]);
    }
    int o,e;
    o=0;
    e=0;
    for(int j=0;j<n;j++){
        if(arr[j]%2==0){
            e++;
        }
        else{
            o++;
        }
    }
    printf("%d",e);
    printf("%d",o);
    return 0;
}