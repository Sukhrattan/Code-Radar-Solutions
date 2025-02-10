#include <stdio.h>
int main() {
    int num,count;
    count = 0;
    scanf("%d",&num);
    for(int i =0;i<=31;i++){
        if(!(num&(1<<i))){
            count++;
        }
        else{
            count = 0;
        }
    }
    printf("%d",count);
    return 0;
}