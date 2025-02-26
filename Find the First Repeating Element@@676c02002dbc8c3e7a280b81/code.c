#include <stdio.h>
int main(void){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0 ; i <n;i++){
        scanf("%d",&arr[i]);
    }
    int flag =1;
    int repeated=0;
    for(int i =0 ; i<n;i++){
        
        for(int j = i+1;j<n;j++){
            if(arr[i]==arr[j]){
                flag = 0;
                repeated = i;
                break;
            }

        }
        if(flag!=1){
            printf("%d",arr[repeated]);
            break;
        }

    }

    if(flag == 1){
        printf("-1");
        
    }
}