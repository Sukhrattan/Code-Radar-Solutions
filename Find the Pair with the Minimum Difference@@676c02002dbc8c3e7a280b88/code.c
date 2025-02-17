#include <stdio.h>
int main(void){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i =0;i<n;i++){
        scanf("%d",arr[i]);
    }
    if(n==1){
        printf("-1");
    }
    int min_diff = arr[0]-arr[1];
    for(int x = 0;x<n;x++){
        for(int y = 0;y<n;y++){
            if(arr[x]>arr[y]){
                int diff = arr[x]-arr[y];
            }
            else if(arr[x]<arr[y]){
                int diff = arr[y]-arr[x];
            }
            if(min_diff>diff){
                min_diff = diff;
            }
            
        }



    }
    printf("%d",min_diff);
    return 0;
}