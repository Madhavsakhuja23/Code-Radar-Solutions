#include <stdio.h>
int main() {
    int N;
    int r[];
    scanf("%d",&N);
    for(int i =0;i<N;i++){
        int n;
        scanf("%d",&n);
        r[i]=n;
    }
    printf("%d",r[0]);
    return 0;
}