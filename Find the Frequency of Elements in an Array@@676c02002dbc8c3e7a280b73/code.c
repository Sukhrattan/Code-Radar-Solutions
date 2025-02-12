#include <stdio.h>
int main(void){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i =0 ;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    int rep[n];
    for(int i = 0;i<n;i++){
        rep[i]=0;
    }


    for(int j=0;j<n;j++){
        if(rep[j]==1){
            continue;
        }
        int selected_index = j;
        int num_count=0;
        for(int i =0;i<n;i++){
            if(arr[i]==arr[selected_index]){
                num_count++;
                rep[i] = 1;
                
            }
        }
        printf("%d %d\n",arr[selected_index],num_count);
    }
}