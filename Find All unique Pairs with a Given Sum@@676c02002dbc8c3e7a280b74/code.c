#include <stdio.h>
int main(void){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int target;
    scanf("%d",&target);
    for(int i =0;i<n;i++){
        int second_element = target - arr[i];
        for(int j = 0;j<n;j++){
            if (arr[j] == second_element){
                printf("%d %d",arr[i],second_element);
            }
        }
    }
}