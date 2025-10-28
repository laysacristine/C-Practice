//verificar numero primo.
//so é primo se é maior que 1, e divisivel por 1 e por ele mesmo

#include <stdio.h>
//adicionar a blibioteca para usar o tipo logico (boolean)
#include <stdbool.h>

int main() {
    //declarar a variavel
    int n, i;
    bool primo = true;
    //ler o numero inteiro
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    //se n for menor ou igual a 1 não é primo
    if (n <= 1){
        primo = false; 
    } else {
       
        for (i = 2; i * i <= n; i++){ 
            //tenta dividir por n por começando em 2 (i = 2)
            if (n % i == 0){ //se encontrar um divisor 
                primo = false; //ele marca n como não primo
                break; //e para a cheacagem
            // Se não encontrar um divisor, ele incrementa i e repete o teste até que i * i seja maior que n.
            //se o loop terminar sem acionar o break isso quer dizer que o numero é primo 
            }
        }
    }
    
    if (primo){
        printf("%d é um numero primo\n", n); 
    }else {
        printf("%d não é um numero primo\n", n);
    }

    return 0;
}