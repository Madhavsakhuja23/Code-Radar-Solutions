#include <stdio.h>
void prime(int n);
void prime(int n){
    if(n<2){
            printf("Not Prime");
        }
    else{
        for(int i=2;i<n;i++){
        if(n%i==0){
            printf("Not Prime");
        }
        else{
            printf("Prime");
        }
         }
    }
}
int main() {
    int n;
    scanf("%d",&n);
    prime(n);
    return 0;
}