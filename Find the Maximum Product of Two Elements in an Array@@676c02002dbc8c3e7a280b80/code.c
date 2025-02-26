#include <stdio.h>
int main(void){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d",(arr[n-1]*arr[n-2]));
    return 0;
}