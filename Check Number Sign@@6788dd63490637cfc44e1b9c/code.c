#include <stdio.h>
int main() {
    int num;
    scanf("%d",&num){
        if(num&(1<<31)){
            printf("Negative");
        }
        else{
            printf("Positive");
        }
    }
    return 0;
}