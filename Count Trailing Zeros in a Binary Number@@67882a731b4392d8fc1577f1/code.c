#include <stdio.h>

int main() {
    int num,count;
    scanf("%d",&num);
    count=0;
    do{
        count++;
        num = num>>1;
    }
    while((num&1)&&(num!=0));
        

    printf("%d",count);
    return 0;
}