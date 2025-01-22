#include <stdio.h>
#define PI 3.14
int main() {
    float radius,area;
    scanf("%.2f",&radius);
    area = radius * PI * radius;
    printf("Area: %.2f", area);
    return 0;
}