#include <stdio.h>
int main(void){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        scanf("%d",&arr[i]);
    }
    int count;
    int prime_count =0;
    int fact;
    for(int x = 0;x<n;x++){
        count = 0;
        for(int i = 2;i<=arr[x]/2;i++){
            if(arr[x]%i==0){
                count++;
            }
        }
        if(count==2){
            prime_count++;
        }

    }
    printf("%d",prime_count);
    return 0;
}