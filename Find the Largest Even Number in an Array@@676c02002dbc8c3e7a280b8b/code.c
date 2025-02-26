#include <stdio.h>
int main (void){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int largest_even  = arr[0];
    for(int i = 0 ; i<n;i++){
        if(arr[i]%2==0 && arr[i]>largest_even){
            largest_even= arr[i];
        }
    }
    if(largest_even!=arr[0]){
        printf("%d",largest_even);
    }
    else{
        printf("-1");
    }
    return 0;
}