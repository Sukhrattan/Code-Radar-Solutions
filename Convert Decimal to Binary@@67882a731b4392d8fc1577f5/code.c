#include <stdio.h>

// int main() {
//     int num,bin[32];
//     int counter=0;
//     scanf("%d",&num);
//     if(num==0){
//         printf("0");
//     }
//     while(num!=0){
//         bin[counter] = num % 2;
//         num = num/2;
//         counter++;
//     }
//     if(num%2==0){
//         for(int i = counter-1;i>=0;i--){
//             printf("%d",bin[i]);
//         }
//     }
//     else{
//         for(int i =0;i<counter;i++){
//             printf("%d",bin[i]);
//         }
        
//     }
//     return 0;
// }

//alternate method using bitwise operations

int main(){
    int num,i=0;
    int bin[32]; //considering 32 bit array for safe measures 

    scanf("%d",&num);
    if(num==0){
        printf("0");
    }
    while(temp!=0){
        bin[i]= num&1;
        num = num >> i;
        i++;
    }

    for(int x = i-1;x>=0;x--){
        printf("%d",bin[x]);
    }


    
    
    return 0;
}