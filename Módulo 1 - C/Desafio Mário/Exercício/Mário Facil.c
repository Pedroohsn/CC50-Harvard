#include <cs50.h>
#include <stdio.h>

int main (void){
    int numUsuario = 0;
    do{
       numUsuario = get_int ("Insira um número de 1 a 8: "); //Pede a informação ao usuário
        
        for(int i = 0; i < numUsuario;i++){ //Aqui vai fazer a # vertical
            printf("\n");
            for(int j = 0 ; j < i; j++){ //Aqui vai fazer a # horizontal
                printf("#");
            }
        } 
        
    } while (numUsuario <= 0); 
}  

