// qual a logica para criar um algoritmo que leia um número inteiro e, em seguida, exiba seu antecessor (número $-1$) e seu sucessor (número $+1$). e essa sequencia logica é

// 1. ler o numero
//2.calcular o antecessor
//3.calcular o sucessor
//4. mostrar os dois


#include <stdio.h>

int main() {
    int numero, sucessor, antecessor;
    
    printf("Digite o numero que voce quer saber o sucessor e o antecessor; ");
    scanf("%d",&numero);
    
    sucessor = numero + 1;
    antecessor = numero - 1;
    
    printf("o sucessor de %d é:  %d\n", numero, sucessor);
    printf("o antecessor de %d é:  %d\n", numero, antecessor);

    return 0;
}











