// Your code here...
#include <stdio.h>
int main(void){
    int rows;
    int k;
    scanf("%d",&rows);
    for(int i = 1;i<=rows;i++){
        for(k=rows-i;k>0;k--){
            printf(" ");
        }
        
        for(int j =0;j<i;j++){
            printf("*");
        }
        printf("\n");
    }
}