#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n],counted[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        int temp =arr[i];
        int fre=0;
        if(counted[i]==1){
            continue;
        }
        for(int j=0;j<n;j++){
            if(temp==arr[j]){
                fre=fre+1;
                counted[i]=1;
            }
        }
        if(fre>n/2){
            printf("%d",arr[i]);
            return 0;
        }

    }
    printf("-1");
    return 0;

}