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
        for(int j=i+1;j<n;j++){
            if(arr[0]==arr[1] && s==arr[i]+arr[j]){
                printf("%d %d",arr[i],arr[j]);
                return 0;
            }
            else if(arr[0]!= arr[1] && s==arr[i]+arr[j]){
                printf("%d %d\n",arr[i],arr[j]);
            }
        }
    }
    return 0;
}