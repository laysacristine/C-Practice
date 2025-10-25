//Par ou Ímpar
//Crie um algoritmo que leia um número inteiro. SE o resto da divisão do número por 2 for $0$ (zero), exiba "Número Par". SENÃO, exiba "Número Ímpar".

#include <stdio.h>

    int main(){
        
        //1. declarar a variavel
        int num = 0;
        
        //2. ler o numero 
        printf("Digite um numero inteiro: ");
        scanf("%d", &num);
        
        //3. Usar estrutura consicional if/else
        //o operador que retona o resto da divisão (%)
        //se o resto da divisão por dois for 0 então é par
        if ((num % 2) == 0){
            printf("O numero %d é par\n");
        } else {
            printf("O numero %d é impar\n");
        }
        
        return 0;
    }