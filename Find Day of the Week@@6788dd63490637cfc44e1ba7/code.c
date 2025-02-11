// Your code here...
#include <stdio.h>
int main (void){
    int num;
    char *days[] = {"Invalid","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
    scanf("%d",&num);
    printf("%s\n",days[num]);
}