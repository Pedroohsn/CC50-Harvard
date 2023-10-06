#include <cs50.h>
#include <stdio.h>

int main (void){
    int numUsuario = 0;
    char fimEspaco = 0; //Ele executa 1 vez por linha
    do{
        numUsuario = get_int ("Insira um número de 1 a 8: ");
        
        for(int i = 1; i <= numUsuario; i++){ //Nesse FOR ele faz a parte vertical
            for(int p = 0; p < i; p++){ //Quantidade de tamanho HORIZONTAL 
            
            int quantEspaco = numUsuario-i; //Quantidade de espaços de acordo com o número de usuário - a posição da linha, conforme a linha vai mudando ele vai subtraindo o número de usuário, assim diminuindo o espaço até não ter mais espaço e só ter #
            int contWhile = p; //Contador, ele vai determinar quantas vezes o while vai se repetir
            
                do{
                    while(quantEspaco > contWhile && fimEspaco == 0){ //Valida se vai ter espaço ou Não
                        printf(" ");
                        contWhile++; // contWhile= +1
                    } 
                    fimEspaco = 1; //
                } while(fimEspaco == 0);
                  printf("#");
            }
            fimEspaco = 0;
             
            for(int j = 0 ; j < i; j++){ //Aqui faz a piramide alinhada a esquerda HORIZONTALMENTE
                if(j == 0 ){ //Ele testa e ve se é a primeira vez sendo passado, se for a primeira volta ele coloca um espaço e depois ele só vai colocando #
                    printf(" ");
                }
                printf("#");
            }
             printf("\n");  
        } 
    } while (numUsuario <= 0);
}