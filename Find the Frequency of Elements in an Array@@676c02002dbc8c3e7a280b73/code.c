#include <stdio.h>
int main(void){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i =0 ;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    for(int j=0;j<n;j++){
        int selected_index = j;
        int num_count=0;
        for(int i =0;i<n;i++){
            if(arr[i]==arr[selected_index]){
                num_count++
            }
        }
        printf("%d %d\n",arr[selected_index],num_count);
    }
}