#include <stdio.h>
int main (void){
    int days[13] = {0,31,28,31,30,31,30,31,30,31,30,31,31};
    int inp;
    scanf("%d",&inp);
    if(inp>=1 && inp<=12){
        printf("%d",days[inp]);
    }
    else{
        printf("Invalid month");
    }
    

    


}