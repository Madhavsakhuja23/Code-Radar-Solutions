#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int a;
        scanf("%d",&a);
        int j[]={};
        j[i]=a;
    }
    int h=j[0];
    for(int i=i;i<n;i++){
        if(h<j[i]){
            h=j[i];
        }
    }
    printf("%d",h)
    return 0;
}