#include <stdio.h>
int main(void){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        scanf("%d",&arr[i]);
    }
    int count;
    int prime_count;
    int fact;
    for(int x = 0;x<n;x++){
        count = 0;
        for(int i = arr[x];i<=n/2;i++){
            if(arr[x]/i==0){
                count++;
            }
        }
        if(count==1){
            prime_count++;
        }

    }
    printf("%d",prime_count);
    return 0;
}