#include <stdio.h>
int main (void){
    int a,b;
    char operation;
    scanf("%d %d %c", &a, &b, &operation);
    if(operation == '+'){
        printf("%d",a+b);
    }
    else if(operation == '-'){
        printf("%d",a-b);
    }
    else if(operation == '*'){
        printf("%d",a*b);
    }
    else if (operation == '/'){
        if(b!=0){
            printf("%d",a/b);
        }
        else{
            printf("error")
        }
        
    }
    else{
        printf("error");
    }

}