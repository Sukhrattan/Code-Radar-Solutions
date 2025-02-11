#include <stdio.h>

void bubbleSort(int arr[], int n) {
    int swapcase;
    for(int i = 0; i < n - 1; i++) {  // Loop n-1 times
        swapcase = 0;
        for(int j = 0; j < n - i - 1; j++) {  // Fix out-of-bounds issue
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapcase++;
            }
        }
        if(swapcase == 0) {
            break;
        }
    }
}

void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);  // Add space for readability
    }
    printf("\n");  // Newline for better output formatting
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    bubbleSort(arr, n);
    printArray(arr, n);
    
    return 0;
}
