#include <stdio.h>

int main() {
    char ab;
    int checker;
    scanf("%c",&ab);
    checker = ab;
    if ((checker<= 90)&&(checker >= 65)){
        printf("Uppercase");
    }
    else if ((checker >=90)){
        printf("Lowercase");
    }
    else{
        printf("Not an alphabet");
    }
    
    return 0;
}