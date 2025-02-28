#include <stdio.h>
int main(void){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0 ; i<n;i++){
        scanf("%d",&arr[i]);
    }
    int sum = 0;
    for(int i = 0 ; i <n;i++){
        sum = arr[i]+sum;
        printf("%d ",sum);
    }
    return 0;
}