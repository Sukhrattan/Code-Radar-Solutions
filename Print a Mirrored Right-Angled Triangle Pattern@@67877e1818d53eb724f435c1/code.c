// Your code here...
#include <stdio.h>
int main(void){
    int rows;
    int k;
    scanf("%d",&rows);
    for(int i = 1,k=rows-i;i<=rows;i++){
        printf(" ");
        for(int j =0;j<i;j++){
            printf("*");
        }
        printf("\n");
    }
}