#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c){
        printf("%f",a);
    }
    else if(b>a && b>c){
        printf("%f",b);
    }
    else{
        printf("%f",c);
    }
    return 0;
}