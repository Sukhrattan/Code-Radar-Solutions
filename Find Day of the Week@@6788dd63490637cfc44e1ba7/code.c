// Your code here...
#include <stdio.h>
int main (void){
    int num;
    char *days[] = {"Invalid","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
    scanf("%d",&num);
    if(num>=1 && num<=7){
        printf("%s\n",days[num]);
    }
    else{
        printf("Invalid");
    }
}