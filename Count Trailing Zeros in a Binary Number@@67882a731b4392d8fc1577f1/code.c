#include <stdio.h>

int main() {
    int num, count = 0;
    scanf("%d", &num);
    
    // Count trailing zeros
    while (num > 0 && (num & 1) == 0) {  // Check if the LSB is 0
        count++;
        num = num >> 1;  // Right shift by 1
    }

    printf("%d", count);
    return 0;
}
