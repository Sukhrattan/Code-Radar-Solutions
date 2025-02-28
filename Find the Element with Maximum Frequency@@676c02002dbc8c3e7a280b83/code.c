#include <stdio.h>
int main(void){
    int n;
    scanf("%d",&n);
    int arr[n];

    for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max_num = 0;
    int max_count = -1;
    for(int i =0;i<n;i++){
        int count = 0;
        
        for(int j = 0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count>max_count){
            max_count=count;
            max_num = arr[i];
        }
        else if(count==max_count){
            if(arr[i]<max_num){
                max_num=arr[i];
            }
        }
    }
    printf("%d",max_num);
    return 0;
}
