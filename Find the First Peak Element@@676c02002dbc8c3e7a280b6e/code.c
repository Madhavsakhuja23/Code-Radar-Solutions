#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int j[n];
    for(int i=1;i<=n;i++){
        scanf("%d\n",&j[i]);
    }
    int h=j[0];
    for(int i=i;i<n;i++){
        if(h<j[i]){
            h=j[i];
        }
    }
    printf("%d",h);
    return 0;
}