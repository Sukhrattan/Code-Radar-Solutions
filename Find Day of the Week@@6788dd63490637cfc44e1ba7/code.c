// Your code here...
#include <stdio.h>
int main (void){
    int num;
    char days[7] = {"dummy","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
    scanf("%d",&num);
    printf("%s",days[num]);
}