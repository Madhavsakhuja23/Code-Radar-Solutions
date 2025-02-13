#include<stdio.h>
void bubble(int n){
    int arr[n];
    for(int i=0; i<n;i++){
        scanf("%d",&arr[i]);
    }
    bubbleSort(arr, n);
    printArray(arr, n);
}
int main(){
    int n;
    scanf("%d",&n);
    bubble(n);
    return 0;
}