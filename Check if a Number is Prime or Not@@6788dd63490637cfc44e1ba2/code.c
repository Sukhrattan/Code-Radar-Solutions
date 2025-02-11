// Your code here...
#include <stdio.h>
int main(void){
    int num,factors;
    scanf("%d",&num);
    factors = 0;
    for(int i =2;i<=num;i++){
        if(num%i==0){
            factors++;
        }

    }
    if(factors==1){
        printf("Prime");

    }
    else{
        printf("Not Prime");
    }
}