#include <stdio.h>

int main() {
    char ab;
    int checker;
    scanf("%c",&ab);
    checker = ab;
    if (checker<= 90)and(checker >= 65){
        printf("Uppercase");
    }
    else{
        printf("Lowercase");
    }
    
    return 0;
}