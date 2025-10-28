#include <stdio.h> 

int main() {
    int codigo, i, numAlunos = 10; 
    float altura, alturaMaisAlto, alturaMaisBaixo, somaAlturas = 0, mediaAltura; 
    int codigoMaisAlto, codigoMaisBaixo;

   
    printf("Insira o código do aluno 1: ");
    scanf("%d", &codigo);
    printf("Insira a altura do aluno 1 (em cm): ");
    scanf("%f", &altura);

    somaAlturas = 0;
    codigoMaisAlto = codigo;
    alturaMaisAlto = altura;
    codigoMaisBaixo = codigo;
    alturaMaisBaixo = altura;
    somaAlturas = somaAlturas + altura; 


    for (i = 0; i < numAlunos; i++) {
        printf("\nInsira o código do aluno %d: ", i);
        scanf("%d", &codigo);
        printf("Insira a altura do aluno %d (em cm): ", i);
        scanf("%f", &altura);

        
        if (altura > alturaMaisAlto) {
            alturaMaisAlto = altura;
            codigoMaisAlto = codigo;
        }

        
        if (altura < alturaMaisBaixo) {
            alturaMaisBaixo = altura;
            codigoMaisBaixo = codigo;
        }

        somaAlturas += altura; 
    }

   
    mediaAltura = somaAlturas / numAlunos;

    
    printf("\n--- Aluno Mais Alto ---\n");
    printf("Código: %d\n", codigoMaisAlto);
    printf("Altura: %.2f cm\n", alturaMaisAlto);

    printf("\n--- Aluno Mais Baixo ---\n");
    printf("Código: %d\n", codigoMaisBaixo);
    printf("Altura: %.2f cm\n", alturaMaisBaixo);

    printf("\n--- Média das Alturas ---\n");
    printf("Média: %.2f cm\n", mediaAltura);

    return 0; 
}