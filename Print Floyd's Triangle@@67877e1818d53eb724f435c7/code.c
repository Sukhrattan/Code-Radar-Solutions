#include <stdio.h>
int main(void){
    int rows;
    scanf("%d",&rows);
    for(int i = 1;i<=rows;i++){
        for(int j = i;j<=i;j++){
            printf("%d ",i+j);
        }
        printf("\n");
    }
}