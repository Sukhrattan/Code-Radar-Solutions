#include <stdio.h>

char* welcome(f) {
    
    scanf("%f",f);
    return f;
}

int main() {
    float f;
    printf("%s", welcome());
    return 0;
}