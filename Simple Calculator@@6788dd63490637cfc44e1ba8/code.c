#include <stdio.h>
int main() {
    float a,b;
    char d;
    scanf("%f %f %c",&a,&b,&d);
    if(d=='+'){
        printf("%d",a+b);
    }
    else if(d=='-'){
        printf("%d",a-b);
    }
    else if(d=='*'){
        printf("%d",a*b);
    }
    else if(d=='/'){
        printf("%d",a/b);
    }
    else{
        printf("error");
    }
    return 0;
}