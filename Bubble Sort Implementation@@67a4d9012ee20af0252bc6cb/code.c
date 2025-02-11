#include <stdio.h>
int bubbleSort(arr[],n){
    int swapcase;
    for(int i =0 ;i<n-1;i++){
        swapcase = 0;
        for(int j=0;j<n-i-1;j++){
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

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    bubbleSort(arr,n);
    printArray(arr,n);
    return 0;
}