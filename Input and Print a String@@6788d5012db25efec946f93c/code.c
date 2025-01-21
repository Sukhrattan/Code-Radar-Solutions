#include <stdio.h>

int main() {
    char string;
    scanf("%c",&string);
    while ((string != '\n' && string != ' ')){
        printf("%c", string);
    }
    return 0;
}