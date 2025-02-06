#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    for(int i=2;i<n;i++){
        if(n%i!=0 || n==2){
            printf("Prime");
            break;
        }
        else{
            printf("Not Prime");
            break;
        }

    }
    return 0;
}