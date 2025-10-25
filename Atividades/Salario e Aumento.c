//Salário e Aumento
//Crie um algoritmo que leia o salário atual de um funcionário. Calcule e exiba o novo salário sabendo que ele recebeu um aumento fixo de 15%.

//1.declarar as variaveis
//2.ler o salario atual 
//3.calcular o salario atual com o aumento fixo de 15%
//4. mostrar o salario novo salario

#include <stdio.h>
    
    int main(){
        float salAtual, aumento, novoSal;
        
        printf("Informe o salario atual do funcionario: ");
        scanf("%f", &salAtual);
        
        aumento = 1.15;
        novoSal = salAtual * aumento;
        
        printf("o novo salario é %.2f\n",novoSal);
        
    
   

    return 0;   
}