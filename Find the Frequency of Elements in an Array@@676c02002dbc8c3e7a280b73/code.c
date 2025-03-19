#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n],counted[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(counted[i]==1){
            continue;
        }
        int temp = arr[i];
        int fre = 0;
        for(int j=0;j<n;j++){
            if(temp==arr[j]){
                fre=fre+1;
                counted[j]=1;
            }
        }
        printf("%d %d\n",temp,fre);
    }
    return 0;
}