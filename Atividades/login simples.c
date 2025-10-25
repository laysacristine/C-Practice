//Login Simples	
//Crie um algoritmo que defina a senha correta como "programar123" (constante). Peça ao usuário
//para digitar a senha. SE a senha digitada for igual à correta, exiba "Acesso Autorizado".
//SENÃO, exiba "Acesso Negado. Tente novamente."
#include <stdio.h>
#include <string.h>

int main() {
    //1. Declarar a variavel constante senha e a entrada do usuario
    const char senha[50] = "programar123";
    char entrada[50];
    //2.pedir para o usuario digitar a senha
    printf("Digite a senha: ");
    scanf("%49s", &entrada);
    
    //3.Entrar com o bloco de condição
    if (strcmp(entrada, senha)  !=0 ){ 
    //4.se a entrada for diferente da senha, então mostre na tela senha incorreta
        printf("Senha incorreta, tente novamente");
    } else { //se não mostre que a senha é correta
        printf("Senha Correta!!");
    }    

    return 0;
}

  //-----anotações-------
  //incluir a biblioteca string.h, a condição não compara string igual compara numero
  //então é preciso adicionar strcmp antes de comparar as variaveis