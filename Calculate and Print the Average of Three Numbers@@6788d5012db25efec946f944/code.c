#include <stdio.h>
int main() {
    float a,b,c;
    float average;
    scanf("%d %d %d",a,b,c);
    average = (a+b+c)/3;
    printf("%.2f", average);
    return 0;
}