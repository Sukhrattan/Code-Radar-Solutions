#include <stdio.h>
int main() {
    int a,b,c;
    float average;
    scanf("%d %d %d",&a,&b,&c);
    average = a+b+c;
    printf("Average: %.2f", average/3);
    return 0;
}