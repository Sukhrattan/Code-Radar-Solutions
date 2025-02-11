// Your code here...
#include <stdio.h>
int main (void){
    char a;
    scanf("%c",&a);
    if(a == 'A'){
        printf("Excellent");
    }
    else if (a == 'B'){
        printf("Good");

    }
        else if (a == 'C'){
        printf("Average");
        
    }
        else if (a == 'D'){
        printf("Below Average");
        
    }
        else if (a == 'F'){
        printf("Fail");
        
    }
    else{
        printf("Invalid grade");
    }
}