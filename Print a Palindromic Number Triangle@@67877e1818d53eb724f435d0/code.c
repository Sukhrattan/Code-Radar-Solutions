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
        
        for(int j =1;j<=i;j++){
            printf("%d ",j);
        }
        for(int x = 1;x<=i;x++){
            printf("%d",x);
            k = k -1;
        }
        printf("\n");
    }
    
}