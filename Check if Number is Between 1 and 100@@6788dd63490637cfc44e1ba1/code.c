// Your code here...
#include <stdio.h>
int main(void){
    int num;
    scanf("%d",&num);
    if(num>= 1 && num<=100){
        printf("In Range");
    }
    else{
        printf("Out of Range");
    }
}