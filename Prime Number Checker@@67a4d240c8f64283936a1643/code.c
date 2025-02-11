// Your code here...
#include <stdio.h>
int isPrime(int num){
    int factors = 0;
    for(int i =2;i<=num;i++){
        if(num%i==0){
            factors++;
        }

    }
    if(factors==1){
        return 1;

    }
    else{
        return 0;
    }
}