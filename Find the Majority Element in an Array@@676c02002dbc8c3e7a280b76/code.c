#include <stdio.h>
int main(void){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);

    }
    int count;
    int dupe[n];
    for(int i =0;i<n;i++){
        count = 0;
        for(int j =0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count>=n/2){
            printf("%d",arr[i]);
            dupe[i]=arr[i];
            break;
        }
    }
    if (!dupe[n]) {
        printf("-1");
    }
    return 0;
}