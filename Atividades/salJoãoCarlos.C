#include <stdio.h>

int main() {
    float salario_carlos = 2500.0;
    float salario_joao = salario_carlos / 3.0;

    float valor_carlos = salario_carlos;
    float valor_joao = salario_joao;

    float rendimento_carlos = 0.02; // 2% ao mês
    float rendimento_joao = 0.05;   // 5% ao mês

    int meses = 0;

    while (valor_joao < valor_carlos) {
        valor_carlos *= (1 + rendimento_carlos);
        valor_joao *= (1 + rendimento_joao);
        meses++;
    }

    printf("João igualará ou ultrapassará o valor de Carlos em %d meses.\n", meses);
    printf("Valor de João: R$ %.2f\n", valor_joao);
    printf("Valor de Carlos: R$ %.2f\n", valor_carlos);

    return 0;
}