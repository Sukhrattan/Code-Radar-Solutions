#include <stdio.h>

int main() {
    int cost,sold;
    scanf("%d %d",&cost,&sold);
    if(cost>sold){
        printf("Profit");
    }
    else{
        print("Loss");
    }
    
    return 0;
}