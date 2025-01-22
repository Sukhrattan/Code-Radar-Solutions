#include <stdio.h>
#define PI 3.1416
int main() {
    float radius,area;
    scanf("%f",&radius);
    area = radius * PI * radius;
    printf("Area: %.2f", area);
    return 0;
}