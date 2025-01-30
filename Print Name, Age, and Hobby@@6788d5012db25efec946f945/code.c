#include <stdio.h>

int main() {
    char a[100];
    char x[100];
    int b;
    scanf("%s %d",&a,&b);
    scanf("%s",&x);
    printf("Name: %s\n",a);
    printf("Age: %d\n",b);
    printf("Hobby: %s",x);
    return 0;
}