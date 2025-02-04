#include <stdio.h>


int main() {
    int num1;
    scanf("%d",&num1);
    if(num1 & (1<<0)){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}