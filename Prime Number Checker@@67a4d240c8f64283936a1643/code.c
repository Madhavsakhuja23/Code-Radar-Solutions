#include <stdio.h>
void prime(int n){
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
}
int main() {
    int n;
    scanf("%d",&n);
    prime(n);
    return 0;
}