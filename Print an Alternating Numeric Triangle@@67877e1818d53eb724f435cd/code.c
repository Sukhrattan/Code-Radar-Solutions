#include <stdio.h>
int main(void){
    int rows;
    scanf("%d",rows);
    for(int i = 0;i<rows;i++){
        for(int j = 0;j<=i;j++){
            if(i==0){
                printf("1");
            }
            else{
                printf("%d ",j);
            }
        }
        printf("\n");
    }

}