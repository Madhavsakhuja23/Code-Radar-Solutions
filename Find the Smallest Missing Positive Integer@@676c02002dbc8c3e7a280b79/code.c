#include<stdio.h>

void sort(int arr[], int n) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    sort(arr, n);

    int missing = 1;
    for(int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            continue; 
        }
        if (arr[i] == missing) {
            missing++;
        }
    }
    printf("%d\n", missing);

    return 0;
}
