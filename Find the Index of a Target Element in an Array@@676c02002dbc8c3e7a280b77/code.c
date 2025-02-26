#include <stdio.h>
int main(void){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0 ; i <n;i++){
        scanf("%d",&arr[i]);
    }
    int target;
    scanf("%d",&target);
    int low = 0;
    int high = n;
    int mid;
    for(int i = low;i<=high-1;i++){
        mid = (low + high)/2
        if(arr[mid]==target){
            printf("%d",arr[i]);
        }
        else if(arr[mid]>target){
            low = low + 1;
        }
        else if(arr[mid]<target){
            high = high - 1;
        }
    }
}