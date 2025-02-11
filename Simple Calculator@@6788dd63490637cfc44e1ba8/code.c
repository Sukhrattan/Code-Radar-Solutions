// Your code here...
#include <stdio.h>
int main (void){
    int a,b;
    char operation;
    scanf("%d %d %s",&a &b &operation);
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