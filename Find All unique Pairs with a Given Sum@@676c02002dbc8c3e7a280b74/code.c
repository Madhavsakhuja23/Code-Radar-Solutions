#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int s;
    scanf("%d",&s);
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(s==arr[i]+arr[j]){
                printf("%d %d\n",arr[i],arr[j]);
            }
        }
    }
    return 0;
}