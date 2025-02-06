#include <stdio.h>
int main() {
    int num,count;
    count = 0
    scanf("%d",&num);
    for(int i =0;i<=31;i++){
        if(!(num&(1<<i))){
            count++;
        }
        else if(num&(1<<i)){
            printf("%d",count);
            break;
            
            count = 0;
        }
    }
    return 0;
}