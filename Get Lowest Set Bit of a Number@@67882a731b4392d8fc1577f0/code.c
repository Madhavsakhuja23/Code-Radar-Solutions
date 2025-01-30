#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if(a&1==1){
        printf("0");
    }
    else{
        printf("1");
    }
    return 0;
}