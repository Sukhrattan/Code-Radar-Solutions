#include <stdio.h>
int main(void){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0 ; i <n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i =0 ; i<n;i++){
        flag = 1;
        for(int j = i+1;j<n;j++){
            if(arr[i]==arr[j]){
                flag = 0;
                break;
            }

        }
        if(flag==0){
            printf("%d",arr[i]);
            break;
        }
    }
}