// Your code here...
// Your code here...
#include <stdio.h>
int main (void){
    char a;
    scanf("%c",&a);
    if(a == 'R'){
        printf("Stop");
    }
    else if (a == 'G'){
        printf("Go");

    }
        else if (a == 'Y'){
        printf("Slow Down");
        
    }
    else{
        printf("Invalid input");
    }
}