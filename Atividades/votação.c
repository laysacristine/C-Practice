//Votação
//Crie um algoritmo que leia a idade de uma pessoa. Determine e exiba:- Idade $\ge 18$: "Voto Obrigatório"- Idade $\ge 16$ e $< 18$: "Voto Facultativo"- Idade $< 16$: "Não Eleitor"

//1. ler a idade da pessoa
//2. determinar se é maior ou = 18 o voto vai ser obrigatorio
//3. se a idade for >= 16 e >= 18 o voto é facultativo
//4. se a idade for menor que 16 a pessoa ainda não vota, ou seja, Não leitor
//5. mostrar na tela

#include <stdio.h>

    int main() {
        int idade;
        
        printf("Informe sua idade: ");
        scanf("%d",&idade);
        
        if (idade >= 18){
            printf("Voto obrigatorio!");
        } else if (idade >= 16){
            printf("Voto facultativo");
        } else {
            printf("Não leitor");
        }
        
        
        return 0;
    }