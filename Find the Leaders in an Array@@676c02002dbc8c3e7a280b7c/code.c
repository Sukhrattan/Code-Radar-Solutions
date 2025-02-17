#include <stdio.h>
int main(void){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int = 0 ; i <n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0;i<n;i++){
        if(arr[i]>arr[i+1]){
            printf("%d ",arr[i]);
        }
    }
    printf("%d",arr[n-1]);


}