#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n],c[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(c[i]==1){
            continue;
        }
        int temp =arr[i];
        int fre=0;
        for(int j=0;j<n;j++){
            if(temp==arr[j]){
                fre++;
                c[j]=1;
            }
        }
        if(fre>1){
            printf("%d",fre);
        }
        else{
            printf("-1");
            return 0;
        }
    }
    
}