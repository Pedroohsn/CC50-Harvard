#include <cs50.h>
#include <stdio.h>
#include <math.h>
//Primeiro deve solicitar ao usuário algum troco em doláres ;
//Usando as maiores moedas que puder, mantendo o controle de quantas moedas voce utilizou até que voce tenha feito o troco para a quantia;
//Usar o menor número de moedas para devolver o troco;
//Pode repetir a mesma moeda ;
//Imprimir o número de moeda na tela;
int main (void){
    int centavos;
    int moedaTroco = 0;
    float numUsuario = 0;
    do{
        numUsuario = get_float ("Insira quanto deseja de troco: "); //Nesse laço vai pedir que o usuario insira o valor do troco, o programa vai pedir o número até que o usuario coloque um número maior que 0
    } while (numUsuario < 0);
     
     centavos = round(numUsuario * 100);
     
     do{
         if(centavos >= 25){
             centavos = centavos - 25;
             moedaTroco++;
         } else if(centavos >= 10){
             centavos = centavos - 10;
             moedaTroco++;
         } else if(centavos >= 5){
             centavos = centavos - 5;
             moedaTroco++;
         } else if(centavos >= 1){
            centavos = centavos - 1;
            moedaTroco++;
         }
     } while(centavos > 0);
     printf("O total de moedas usadas foram: %i",moedaTroco);
}