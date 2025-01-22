#include <stdio.h>
#define PI 3.145
int main() {
    float radius,area;
    scanf("%.1f",&radius);
    area = radius * PI * radius;
    printf("Area: %.2f", area);
    return 0;
}