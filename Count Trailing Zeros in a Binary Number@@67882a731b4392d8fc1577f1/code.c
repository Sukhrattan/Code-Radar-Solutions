#include <stdio.h>

int main() {
    int num,count;
    scanf("%d",&num);
    count=0;

    while((num&1)==0){
        count++;
        num = num>>1;
    }
    printf("%d",count);
    return 0;
}