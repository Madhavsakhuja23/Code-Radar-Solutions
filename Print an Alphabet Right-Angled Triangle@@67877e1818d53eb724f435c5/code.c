#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(char c='A';c<='A'+i;j++){
            printf("%c",c);
        }
        printf("\n");
    }
    return 0;
}