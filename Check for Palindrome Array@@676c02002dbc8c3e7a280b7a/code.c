#include <stdio.h>
int main(void){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int temp[n];
    for(int x = 0;x<n;x++){
        temp[x] = arr[n-1-x];
    }
    int flag = 1; 
    for(int i =0 ;i<n;i++){
        if(arr[i]==temp[n-i-1]){

        }
        else{
            flag = 0;
        }
    }
    if(flag==1){
        printf("YES");
    }



    return 0;
}