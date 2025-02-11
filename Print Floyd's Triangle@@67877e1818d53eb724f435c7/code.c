#include <stdio.h>
int main(void){
    int rows;
    scanf("%d",&rows);
    for(int i = 1;i<=rows;i++){
        for(int j = i-1;j<=i;j++){
            printf("%d ",1+j);
        }
        printf("\n");
    }
}