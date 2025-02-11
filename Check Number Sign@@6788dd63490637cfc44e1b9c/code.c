#include <stdio.h>
int main() {
    int num;
    scanf("%d",&num);
        if(num&(1<<31)){
            printf("Negative");
        }
        else if(num==0){
            printf("Zero");
        }
        else{
            printf("Positive");
        }
    
    return 0;
}