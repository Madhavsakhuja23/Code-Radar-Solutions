// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n],new1[n],new2[n],fin[n];
    for(int i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    for(int i=0;i<=n-1;i++){
        if(i>k){
            new1[i]=0;
        }
        else{
            new1[i]=arr[i];
        }
    }
    for(int i=0;i<=n-1;i++){
        if(i<k){
            new2[i]=arr[i];
        }
        else{
            new2[i]=0;
        }
    }
    for(int i=0;i<n;i++){
        fin[i]=new2[i]+new1[i];
    }
    for(int i=0;i<n;i++){
        printf("%d\n",fin[i]);
    }
    return 0;
}