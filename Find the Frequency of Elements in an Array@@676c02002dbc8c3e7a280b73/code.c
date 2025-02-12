#include <stdio.h>
int main(void){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i =0 ;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int arr_rep[n];
    for(int j=0;j<n;j++){
        if(arr_rep[j-1]!=arr[j]){
            int selected_index = j;
        }
        else{
            continue;
        }
        
        int num_count=0;
        for(int i =0;i<n;i++){
            if(arr[i]==arr[selected_index]){
                num_count++;

            }
        }
        arr_rep[j]==arr[selected_index];
        printf("%d %d\n",arr[selected_index],num_count);
    }
}