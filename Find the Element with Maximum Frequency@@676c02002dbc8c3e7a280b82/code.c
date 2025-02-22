#include <stdio.h>
int main (void){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max_count = 0;
    
    int max;
    int max_index = 0;
    for(int i = 0;i<n;i++){
        count = 0;
        for(int j = 0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count>max_count){
            max_count = count;
            max_index = i;
            printf("%d ",arr[max_index]);
        }
        else if(count == max_count){
            if(arr[max_index]>arr[i]){
                max_index = i;
            }
        }
    }
    // printf("%d",arr[max_index]);
    return 0;
}