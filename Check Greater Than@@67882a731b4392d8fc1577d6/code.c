#include <stdio.h>

int main() {
    int str[2];
    int i;
    for(i=0;i<=1;i++){
        scanf("%d",&str[i]);
    };
    (str[0]>str[1])?printf("True"):printf("False");