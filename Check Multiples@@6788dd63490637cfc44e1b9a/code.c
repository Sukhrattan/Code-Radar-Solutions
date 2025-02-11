#include <stdio.h>

int main() {
    int num , multiple;
    scanf("%d %d",&num,&multiple);
    if(num%multiple==0){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}