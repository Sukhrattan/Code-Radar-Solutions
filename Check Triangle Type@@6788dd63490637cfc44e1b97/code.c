#include <stdio.h>


int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a==b&&a==c&&b==c){
        printf("equilateral");
    }
    else if (a==b || a==c || b==c){
        printf("isosceles");
    }
    else{
        printf("scalene");
    }
  
    return 0;
}