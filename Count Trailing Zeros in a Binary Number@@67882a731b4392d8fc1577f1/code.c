#include <stdio.h>

int main() {
    int num,count = 0;
    scanf("%d",&num);
    count=0;
    do{
        count++;
    }
    while(num&1);
        num = num>>1;

    printf("%d",count);
    return 0;
}