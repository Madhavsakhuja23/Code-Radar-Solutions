#include <stdio.h>
int main() {
    float a,b;
    char d;
    scanf("%f %f %c",&a,&b,&d);
    if(d=='+'){
        float f;
        f=a+b;
        int e=int(f);
        printf("%d",e);
    }
    else if(d=='-'){
        float f;
        f=a-b;
        int e=int(f);
        printf("%d",a-b);
    }
    else if(d=='*'){
        float f;
        f=a*b;
        int e=int(f);
        printf("%d",a*b);
    }
    else if(d=='/'){
        float f;
        f=a/b;
        int e=int(f);
        printf("%d",a/b);
    }
    else{
        printf("error");
    }
    return 0;
}