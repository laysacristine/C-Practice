//Cálculo de Consumo
//qual a logica para criar um algoritmo que leia a distância percorrida (em Km) e a quantidade de combustível gasta (em Litros). Calcule e exiba o consumo médio do veículo ($\text{Km/L}$).

//1. ler a distancia percorrida pelo carro em km
//2.ler a quantidade de combustivel gasto em litros
//3.calcular o consumo que é a distancia dividida pelo combustivel consumo = distancia/combustivel
//4.mostrar o custo medio

#include <stdio.h>

    int main(){
        
        float distance, quant, consu;
        
        printf("Informe a distancia que voce percorreu: ");
        scanf("%f", &distance);
        
        printf("Informe a quantidade de combustivel gasto em litros: ");
        scanf("%f", &quant);
        
        consu = distance/quant;
        
        printf("O consumo medio do veiculo é de %.2fKm/L por %.2fKm", consu, distance);

    return 0;   
}











