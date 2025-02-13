#include <stdio.h>
void prime(int n){
    if(n<2){
            printf("Not Prime");
            return;
        }
    for(int i=2;i<n;i++){
        if(n%i==0){
            printf("Not Prime");
            return;
        }
        
    }
}
int main() {
    int n;
    scanf("%d",&n);
    prime(n);
    return 0;
}