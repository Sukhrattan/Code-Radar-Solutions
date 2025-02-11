#include <stdio.h>
int main(void){
    int n;
    scanf("%d",&n);
    int arr[n];
    int swaps = 0;
    for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0;i<n-1;i++){
        for(int j =0 ;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swaps++;
            }
        }
        if(swaps==0){
            printf("Sorted");
            break;
        }
        else{
            printf("Not Sorted");
            break;
        }
    }
    
}