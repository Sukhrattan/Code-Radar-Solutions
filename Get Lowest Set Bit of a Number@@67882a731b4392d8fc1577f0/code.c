#include <stdio.h>

int main() {
    int num,bit;
    scanf("%d",&num);
    for(int i = 0;i<31;i++){
        if(num&(1<<i)){
            printf("%d",i);
            break;
        }
    }
    return 0;
}