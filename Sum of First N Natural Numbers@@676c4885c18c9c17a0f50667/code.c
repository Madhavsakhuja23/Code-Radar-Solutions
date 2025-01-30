#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    int s = 0;
    while(a>0){
        s=s+a;
        a=a-1;
    }
    printf("%d",s);
    return 0;
}