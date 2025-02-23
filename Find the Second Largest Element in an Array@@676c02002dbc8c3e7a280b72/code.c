#include <stdio.h>
int main(void){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i<n ;i++){
        scanf("%d ",&arr[i]);
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
    int same_element = 1;
    for(int i = 0;i<n;i++){
        
        for(int j =0;j<n;j++){
            if(arr[i]==arr[j]){
                same_element = 1;
            }
            else{
                same_element=0;
                break;
            }
        }
    }
    if(same_element==1){
        printf("-1");
    }
    return 0;
}