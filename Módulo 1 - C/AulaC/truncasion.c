#include <cs50.h>
#include <stdio.h>

int main(void){
    float x = get_float("Informe um número: ");
    float y = get_float("Informe outro número: ");
    float z = x/y ;
    
    printf("A divisão dos números é: %f", z);
    
}