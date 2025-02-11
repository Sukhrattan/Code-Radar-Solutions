int bubbleSort(arr,n){
    int swapcase;
    for(int i =0 ;i<n;i++){
        swapcase = 0;
        for(int j=0;i<n;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapcase++;
            }
        
        }
        if(swapcase == 0){
            break;
        }
    }
}

int printArray(arr,n){
    for(int i = 0;i<n;i++){
        printf("%d",arr[i]);
    }
}