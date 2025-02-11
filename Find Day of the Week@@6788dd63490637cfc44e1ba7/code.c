// Your code here...
#include <stdio.h>
int main (void){
    int num;
    char days[8] = {"dummy","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
    scanf("%d",&num);
    printf("%c",days[num]);
}