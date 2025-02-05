#include <stdio.h>
int main() {
    float a,b;
    char d;
    scanf("%f %f %c",&a,&b,&d);
    if(d=='+'){
        printf("%f",a+b);
    }
    else if(d=='-'){
        printf("%f",a-b);
    }
    else if(d=='*'){
        printf("%f",a*b);
    }
    else if(d=='/'){
        printf("%f",a/b);
    }
    else{
        printf("error");
    }
    return 0;
}