#include <stdio.h>
int main (void){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max_count = 0;
    int count = 0;
    int max;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count>max_count){
            max_count = count;
            max = arr[i];
        }
    }
    printf("%d",max);
    return 0;
}