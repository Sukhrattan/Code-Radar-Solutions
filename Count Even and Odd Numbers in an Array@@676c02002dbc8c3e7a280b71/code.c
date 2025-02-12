#include <stdio.h>
int main(void){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i =0 ;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int even_count=0;
    int odd_count=0;
    for(int j = 0;j<n;j++){
        if(arr[j]%2==0){
            even_count++;
        }
        else{
            odd_count++;
        }
    }
    printf("%d %d",even_count,odd_count);
}