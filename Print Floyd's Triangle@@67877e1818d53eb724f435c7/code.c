#include <stdio.h>
int main(void){
    int rows;
    scanf("%d",&rows);
    for(int i = 1;i<=rows;i++){
        for(int j = i;j<=i+1;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
}