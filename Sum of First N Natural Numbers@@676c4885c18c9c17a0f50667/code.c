// Your code here...
#include <stdio.h>
int main(void){
    int length,sum = 0;
    scanf("%d",&length);
    for(int i = 1;i<=length;i++){
        sum += i;
    }
    printf("%d",sum);
}