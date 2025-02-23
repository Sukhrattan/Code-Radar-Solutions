#include <stdio.h>
int main(void){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);

    }
    int count;
    int dupe=-1;
    for(int i =0;i<n;i++){
        count = 0;
        for(int j =0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count>n/2){
            dupe=arr[i];
            break;
        }
    }
    printf("%d",dupe);
    return 0;
}