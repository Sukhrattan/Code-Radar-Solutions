#include <stdio.h>
int main(void){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    int temp[k];
    scanf("%d",&k);
    for (int x = 0; x < k; x++) {
        temp[x] = arr[n - k + x];  
        // printf("%d ", temp[x]);
    }
    for (int i = n - 1; i >= k; i--) {
        arr[i] = arr[i - k];
        // printf("%d ",arr[i]);
    }
    for (int i = 0; i < k; i++) {
        arr[i] = temp[i];
        printf("%d ",arr[i]);
    }

}