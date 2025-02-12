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
    for(int x = 0;x<=k;x++){
        temp[x] = arr[n-k+x];
        printf("%d ",temp[x]);
    }
}