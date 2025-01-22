#include <stdio.h>

int main() {
    char str[2];
    int i;
    for( i =0;i<=1,i++){
        scanf("%d",str[i]);
    }
    if(str[0]>str[1]){
        printf("True");

    }
    else{
        printf("False");
    }
    return 0;
}