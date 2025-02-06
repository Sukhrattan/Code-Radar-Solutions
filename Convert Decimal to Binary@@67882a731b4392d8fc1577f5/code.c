#include <stdio.h>

int main() {
    int num,bin[32];
    int counter=0;
    scanf("%d",&num);
    while(num!=0){
        bin[counter] = num % 2;
        num = num/2;
        counter++
    }
    if(num%2==0){
        for(int i = counter-1;i>=0;i--){
            printf("%d",bin[i]);
        }
    }
    else{
        for(int i =0;i<counter;i++){
            printf("%d",bin[i]);
        }
        
    }
    return 0;
}