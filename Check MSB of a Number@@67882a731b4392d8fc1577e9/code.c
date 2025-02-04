#include <stdio.h>

int main() {p
    int num;
    scanf("%d",&num);
    if(num&(1<<32)){
        printf("Set");
    }
    else{
        printf("False");
    }
    return 0;
}