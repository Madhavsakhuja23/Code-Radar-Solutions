#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d",&a,&b);
    c=b*b;
    if(a != c){
        printf("No");
    }
    else{
        printf("Yes");
    }
    return 0;
}