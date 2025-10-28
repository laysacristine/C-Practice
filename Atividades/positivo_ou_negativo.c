//Positivo ou Negativo
//Crie um algoritmo que leia um número inteiro. SE o número for positivo,
//exiba "Número positivo". SENÃO (Else), exiba "Número negativo".

//1. declarar a variavel
//2.ler o numero inteiro
//3.se meu numero for possitivo mostrar mensagem na tela
//4. se não ele é negativo

#include <stdio.h>

    int main(){
        
        int num;
        
        printf("Qual numero deseja saber se é positivo ou negativo?? ");
        scanf("%d",&num);
        
        if (num < 0) {
            printf("Numero negativo");
        }
        else {
            printf("numero positivo");
        }
        
        return 0;
    }
    
    //o problema desse codigo é que o zero na matematica é tratado como neutro e 
    //nesse programa se perguntarem se o 0 é positivo ou negativo vai dar que ele
    //é positivo
    //para resolver é so adicionar o else if ao codigo ficando assim:
    //     if (num > 0) {
    //         printf("Numero positivo");
    //     } else if (num < 0) {
    //           printf("Numero negativo");
    //     } else { 
    //    printf("O numero é zero (neutro).");
    //    }