#include <cs50.h>
#include <stdio.h>

int main (void) {
    long x = get_long("Insira um número inteiro: ");
    long y = get_long("Insira um segundo número: ");
    
    printf(" A soma dos números é: %li", x + y );
}