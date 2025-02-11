// Your code here...
#include <stdio.h>
int main (void){
    int a,b;
    char operation;
    if(operation == "+"){
        printf("%d",a+b);
    }
    else if(operation == "-"){
        printf("%d",a-b);
    }
    else if(operation == "*"){
        printf("%d",a*b);
    }
    else if (operation == "/"){
        printf("%d",a/b);
    }
    else{
        printf("error");
    }

}