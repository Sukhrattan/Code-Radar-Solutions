#include <stdio.h>

int main() {
    int num,bin[32];
    int counter=0;
    scanf("%d",&num);
    if(num==0){
        printf("0");
    }
    while(num!=0){
        bin[counter] = num % 2;
        num = num/2;
        counter++;
    }
        for(int i = counter-1;i>=0;i--){
            printf("%d",bin[i]);
        }

    
    return 0;
}

//alternate method using bitwise operations

// int main(){
//     int num,i=0;
//     int bin[32]; //considering 32 bit array for safe measures 

//     scanf("%d",&num);
//     if(num==0){
//         printf("0");
//     }
//     while(num!=0){
//         bin[i]= num&1; //checking LSB and adding it to array
//         num = num >> 1; //shifting bits to change the LSB for next iteration
//         i++;
//     }

//     for(int x = i-1;x>=0;x--){ //printing from MSB TO LSB
//         printf("%d",bin[x]);
//     }

//     return 0;
// }
//thanks for reading - Sukhrattan S.