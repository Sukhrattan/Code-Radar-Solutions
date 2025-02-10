#include <stdio.h>

int main() {
    int cost,sold;
    scanf("%d %d",&cost,&sold);
    if(sold>cost){
        printf("Profit");
    }
    else if(sold<cost){
        print("Loss");
    }
    else{
        printf("No Profit No Loss");
    }
    return 0;
}