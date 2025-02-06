#include <stdio.h>
int main() {
    int num,bit;
    scanf("%d %d",&num,&bit);
    num = num&(~(1<<bit));
    printf("%d",num);
    return 0;
}