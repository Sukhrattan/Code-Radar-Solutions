#include <stdio.h>
int main(void){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int diff;
    int min_diff = arr[0]-arr[1];
    for(int x = 0;x<n;x++){
        for(int y = 0;y<n;y++){
            if(arr[x]>arr[y]){
                diff = arr[x]-arr[y];
                printf("%d ",diff);
            }
            else if(arr[x]<arr[y]){
                diff = arr[y]-arr[x];
                printf("%d ",diff);
            }
            if(min_diff>diff){
                min_diff = diff;
                printf("%d ",min_diff);
            }
            
        }



    }
    printf("\n%d",min_diff);
    return 0;
}