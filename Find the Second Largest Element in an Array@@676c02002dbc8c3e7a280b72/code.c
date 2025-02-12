#include <stdio.h>
int main(void){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i<n ;i++){
        scanf("%d",&arr[n]);
    }
    int swapdone;
    for(int i =0 ;i<n-1;i++){
        swapdone = 0;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapdone++;
            }
        
        }
        if(swapdone == 0){
            break;
        }

    }
    printf("%d",arr[n-2]);
}