#include <stdio.h>
int main(void){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    max_element = -1;
    for(int i = 0;i<n;i++){
        if(arr[i]>max_element){
            max_element=arr[i];
            if(max_element>arr[i+1]){
                printf("%d",max_element);
                return 0;
            }
        }
    }


}