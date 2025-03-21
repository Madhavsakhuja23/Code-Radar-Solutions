#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n],nprime=0,p=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]==2){
            p++;
        }
        
        for(int j=2;j<arr[i];j++){
            if(arr[i]%j==0){
                nprime++;
                continue;
            }
            p++;
        }
    
        
        
    }
    printf("%d",p);
    return 0;
}