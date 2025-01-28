#include <stdio.h>

int main() {
    char ab;
    int checker;
    scanf("%c",&ab);
    checker = ab;
    if ((checker<= 90)&&(checker >= 65))||((checker >=90)&&(checker <= 123)){
        printf("Enter Valid Integer");
    }
    else if ((checker >0)){
        printf("Positive");
    }
    else{
        printf("Negative");
    }
    
    return 0;
}