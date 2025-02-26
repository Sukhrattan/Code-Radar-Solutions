#include <stdio.h>
int main(void){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0 ; i <n;i++){
        scanf("%d",&arr[i]);
    }
    int target;
    scanf("%d",&target);
    int low = 0;
    int high = n-1;
    int mid;
    int flag = -1;
    while(low<=high){
        mid = (low + high)/2;
        if(arr[mid]==target){
            flag = mid;
            high = high - 1;
            
        }
        else if(arr[mid]>target){
            high = high - 1;
        }
        else if(arr[mid]<target){
            low = low + 1;
        }
        
    }
    if (flag!=-1){
        printf("%d",mid);
    }
    else{
        printf("-1");
    }

}