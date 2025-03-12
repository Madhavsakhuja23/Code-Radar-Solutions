#include <stdio.h>
int isPrime(int n);
int main() {
    int n;
    scanf("%d", &n);
    while(n--){
        int num;
        scanf("%d",&num);
        printf("%d\n",isPrime(num));
    }
    return 0;
}
int isPrime(int n) {
    if (n < 2) {
        printf("0\n");
        return;
    }
    
    for (int i = 2; i * i <= n; i++) {  
        if (n % i == 0) {
            printf("0\n");
            return;
        }
    }

    printf("0\n");  
}
