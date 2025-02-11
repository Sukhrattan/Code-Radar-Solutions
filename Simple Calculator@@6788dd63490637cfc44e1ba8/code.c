#include <stdio.h>
int main (void){
    int a,b;
    char o;
    scanf("%d %d %c", &a, &b, &o);
    if(o == '+'){
        printf("%d",a+b);
    }
    else if(o == '-'){
        printf("%d",a-b);
    }
    else if(o == '*'){
        printf("%d",a*b);
    }
    else if (o == '/'){
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