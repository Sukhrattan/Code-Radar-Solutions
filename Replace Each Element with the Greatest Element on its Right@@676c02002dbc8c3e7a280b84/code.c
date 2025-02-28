#include <stdio.h>
int main(void){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max_num = -1;
    for(int i = 0; i<n;i++){
        if(i==n-1){
            printf("-1");
            break;
        }
        for(int j = n-1;j<i;j++){
            if(max_num<arr[j]){
                max_num=arr[j];
            }
        }
        printf("%d ",max_num);
    }


    return 0;


}