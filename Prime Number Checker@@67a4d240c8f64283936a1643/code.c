#include <stdio.h>
void prime(int n);
int main() {
    int n;
    scanf("%d", &n);
    
    prime(n);
    
    return 0;
}
void prime(int n) {
    if (n < 2) {
        printf("Not Prime\n");
        return;
    }
    
    for (int i = 2; i * i <= n; i++) {  
        if (n % i == 0) {
            printf("Not Prime\n");
            return;
        }
    }

    printf("Prime\n");  
}
