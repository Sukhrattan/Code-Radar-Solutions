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
        for(int x = 1;x<i;x++){
            printf("*");
        }
        
        printf("\n");
    }
    for(int i = rows;i>0;i--){
        for(k=1;k<i;k++){
            printf(" ");
        }
        
        for(int j =0;j<i;j++){
            printf("*");
        }

        printf("\n");
    }
    
}