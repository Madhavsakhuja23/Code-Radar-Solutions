#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(char c='A';c<='A'+n-i;c++){
            printf("%c ",c);
        }
        printf("\n");
    }
    return 0;
}