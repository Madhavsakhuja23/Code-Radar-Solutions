#include <stdio.h>
int prime(int n){
    if(n<2){
            printf("Not Prime");
            return 0;
        }
    for(int i=2;i<n;i++){
        if(n%i==0){
            printf("Not Prime");
            return 0;
        }
        
    }
    return 1;
}
int main() {
    int n;
    scanf("%d",&n);
    prime(n);
    return 0;
}