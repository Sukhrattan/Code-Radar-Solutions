#include <stdio.h>
int main(void){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int flag = 1;
    for(int i = 0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            flag = 0;
            break;
        }

    }
    if(flag){
        printf("Sorted");
    }
    else{
        printf("Not Sorted");
    }
}