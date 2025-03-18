void bubbleSort(int arr[], int n){
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1]){
            arr[i]=arr[i+1];
        }
    }
}
int printArray(int arr[], int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}