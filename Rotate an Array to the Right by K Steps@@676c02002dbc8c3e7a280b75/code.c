#include <stdio.h>
int main(void){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[n]);
    }
    int k;
    int temp[k];
    scanf("%d",&k);
    for(int x = n-1;x>=k;x--){
        temp[x] = arr[n-k];
        printf("%d ",temp[x]);
    }
}