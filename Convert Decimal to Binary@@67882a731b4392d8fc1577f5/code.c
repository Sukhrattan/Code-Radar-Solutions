#include <stdio.h>

int main() {
    int num;
    scanf("%d",&num);
    while(num!=0){
        printf("%d",(num%0));
    }
    return 0;
}