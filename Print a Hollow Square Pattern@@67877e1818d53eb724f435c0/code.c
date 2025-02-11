// Your code here...
#include <stdio.h>
int main(void){
    int length;
    scanf("%d",&length);
    for(int i = 0;i<=length;i++){
        for(int j = 0;j<=length;j++){
            if(i==0||i==length){
                printf("*");
            }
            else if{
                if(j==0 || j==length){
                    printf("*");
                }
                else{
                    printf(" ");
                }
            }
        
        }
        printf("\n");
    }
}