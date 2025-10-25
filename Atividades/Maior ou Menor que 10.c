//Maior ou Menor que 10
//Crie um algoritmo que leia um número inteiro. Se o número for maior que 10, exiba a mensagem: "O número é maior que 10."

//1. ler o numero
//2. se meu numero for menor que 10 então vou mostrar na tela que meu numero é menor que 10
//3.se não irei mostrar que é maior que 10


#include <stdio.h>

    int main() {
        
        int num;
        
        printf("Digite um numero de 0 a 20: ");
        scanf("%d", &num);
        
        if (num < 10) {
            printf("o numero é menor que 10");
        } 
        else if (num > 10) {
            printf("O numero é maior que 10");
        }
        else {
            printf("o 10 não conta");
        }

        return 0;
    }

//mesmo problema do Positivo ou Negativo








