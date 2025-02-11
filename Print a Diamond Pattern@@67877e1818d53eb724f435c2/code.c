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
    for(int l = rows-1;l>0;l--){
        for(k=1;k<=rows-l;k++){
            printf(" ");
        }
        
        for(int j =0;j<l;j++){
            printf("*");
        }
        for(int x = 1;x<l;x++){
            printf("*");
        }

        printf("\n");
    }
    
}