// Your code here...
#include <stdio.h>
int main(void){
    int num;
    scanf("%d",&num);
    for(int i = 1;i<=num;i++){
        printf("%d x %d = %d",num,i,num*i);
        printf("\n");
    }
    
}