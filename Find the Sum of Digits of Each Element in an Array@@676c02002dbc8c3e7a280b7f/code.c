#include <stdio.h>
int main(void){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int sum = 0;
    for(int i = 0;i<n;i++){
        int temp = arr[i];
        while(temp>0){
            int digit = arr[i]%10;
            sum = sum + digit;
            temp = arr[i]/10;
        } 
        printf("%d",sum);
    
    }

}