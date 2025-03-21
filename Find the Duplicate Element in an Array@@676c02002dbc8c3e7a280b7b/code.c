#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        int temp =arr[i];
        int c=0;
        for(int j=i;j<n;j++){
          if(temp==arr[j]){
            c++;
          }
        }
        if(c>1){
        printf("%d",temp);
        }
    }
    return 0;
}