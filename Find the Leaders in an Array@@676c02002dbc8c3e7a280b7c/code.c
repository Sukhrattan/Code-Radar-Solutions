#include <stdio.h>
int main(void){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0 ; i <n;i++){
        scanf("%d",&arr[i]);
    }
    int flag = 1;
    for(int i = 0;i<n-1;i++){
        for(int j = i+1;j<=n-1,j++){
            if(arr[i]>=arr[j]){
                flag = 1;
            }
            else{
                flag = 0;
            }
        }
        if(flag == 1){
            printf("%d",arr[i]);
        }
    }
    printf("%d",arr[n-1]);

    return 0;
}