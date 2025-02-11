// Your code here...  
#include <stdio.h>
int main(void){
    int a , b;
    scanf("%d %d",&a,&b);
    if(a/b==b && a%b==0){
        printf("Yes");

    }
    else{
        printf("No");
    }
}