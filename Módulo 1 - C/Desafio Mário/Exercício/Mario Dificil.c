#include <cs50.h>
#include <stdio.h>

int main (void){
    int numUsuario = 0;
    char fimEspaco = 0;
    do{
        numUsuario = get_int ("Insira um número de 1 a 8: ");
        
        for(int i = 1; i <= numUsuario; i++){   //Nesse FOR ele faz a parte vertical
            for(int p = 0; p < i; p++){         //Espaço?
            
            int quantEspaco = numUsuario-i; //Vai ser sempre o numéro de usuario digitado - 1...2...3...4...
            int contWhile = p;
            
                do{
                    while(quantEspaco > contWhile && fimEspaco == 0){
                        printf(" ");        //Espaços 7...6...5...4...3...2...1
                        contWhile++; 
                    } 
                    fimEspaco = 1;
                } while(fimEspaco == 0);
                  printf("#");
            }
            fimEspaco = 0;
             printf("\n");
            
        } 
    } while (numUsuario <= 0);
    
    
}

