#include <stdio.h>
int main(void){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0;i<n;i++){
        int dupe_count = 0;
        for(int x = i+1;x<n;x++){
            if(arr[x]==arr[i]){
                printf("%d",arr[i]);
                return 0;
            }
        }
    }
    
}