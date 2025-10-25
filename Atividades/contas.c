//receber dois numeros, calcular e mostrar a subtração do primeiro pelo segundo

#include <stdio.h>

    int main() {
        //1. declarar variavel
        int x, y, resultado;
        //2.ler os dois numeros
        printf("Digite o primeiro numero: ");
        scanf("%d", &x);
        
        printf("Digite o segundo numero: ");
        scanf("%d", &y);
        //3.calcular e atribuir o valor de x-y ao resultado
        resultado = x - y;
        
        //4.Mostrar o resultado
        printf("A subtração de %d - %d é: %d\n",x, y, resultado);

        return 0; 
    }


    //receber tres numeros calcular e mostrar a multiplicação

#include <stdio.h>

    int main() {
        //1. declarar variavel
        int x, y, z, resultado;
        //2.ler os tres numeros
        printf("Digite o primeiro numero: ");
        scanf("%d", &x);
        
        printf("Digite o segundo numero: ");
        scanf("%d", &y);
        
        printf("Digite o terceiro numero: ");
        scanf("%d", &z);
        //3.calcular e atribuir o valor de x-y ao resultado
        resultado = x * y *z;
        
        //4.Mostrar o resultado
        printf("A multiplicação de %d * %d * %d é: %d\n",x, y, z, resultado);
        
        return 0;
    }