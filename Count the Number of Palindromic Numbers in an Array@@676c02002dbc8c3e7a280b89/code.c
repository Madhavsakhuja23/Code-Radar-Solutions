#include<stdio.h>
int main(){
    int n ;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int pal=0;
    for(int i =0;i<n;i++){
        int temp=arr[i];
        int r=0,m=temp;
        while(temp>0){
            r=r*10+temp%10;
            temp=temp/10;
        }
        if(r==m){
            pal++;
        }
    }
    printf("%d",pal);
    return 0;
}