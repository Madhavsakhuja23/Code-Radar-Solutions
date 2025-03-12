#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int j[n];
    for(int i=0;i<n;i++){
        scanf("%d",&j[i]);
    }
    int h=j[0];
    for(int i=1;i<n;i++){
        if(h<j[i]){
            h=j[i];
            break;
        }
    }
    printf("%d",h);
    return 0;
}