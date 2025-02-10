#include <stdio.h>

int main() {
    int marks;
    scanf("%d",&marks);
    (marks>=90)?((printf("A")):((marks<90 && marks>=80)?printf("B")));
    
    return 0;
}