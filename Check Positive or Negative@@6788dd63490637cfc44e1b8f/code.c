#include <stdio.h>
int main() {
    int num;
    scanf("%d",&num);
    if(num&(1<<31)){ //checking if MSB is 1 or not , since if MSB is 1 it means the integer is negative according to DECA
        printf("Negative");
    }
    else if(num==0) {
        printf("Zero");
    }
    else{
        printf("Positive");
    }
    
    return 0;
}