#include <stdio.h>
int main(void){
    int rows;
    scanf("%d",&rows);
    for(int i = 1;i<=rows;i++){
        for(int j = 0;j<i;j++){
            if((i+j)%2==0){
                printf("0 ");
            }
            else{
                printf("1 ");
            }

        }
        printf("\n");
    }

}