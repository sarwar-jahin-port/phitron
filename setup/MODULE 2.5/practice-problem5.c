#include <stdio.h>
int main(){
    int balance;
    scanf("%d", &balance);

    if(balance>=10000){
        printf("Gucci Bag\n");
        if(balance > 20000){
            printf("Gucci Belt");
        }
    } 
    else if(balance>=5000){
        printf("Levis Bag\n");
        }
    else{
        printf("Something\n");
    }

    return 0;
}