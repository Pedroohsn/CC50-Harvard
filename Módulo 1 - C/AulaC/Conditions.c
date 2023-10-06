#include <cs50.h>
#include <stdio.h>

int main (void) {
    int x = get_int("Insira um número: ");
    int y = get_int ("Insira outro número: ");
    
    if (x < y){
        printf("O número é maior %i",y);
    }
    else if(x > y){
        printf("O número é maior %i",x);
    }
    else{
        printf("É igual!");
    }
}