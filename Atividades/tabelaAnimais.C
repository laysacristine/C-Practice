#include <stdio.h>
//tabela animais
int main() {
    int nivel1, nivel2, nivel3;

    printf("\n--- MENU PRINCIPAL ---\n");
    printf("Escolha o Nível 1:\n");
    printf("1 - Mamíferos\n");
    printf("2 - Aves\n");
    printf("3 - Répteis\n");
    scanf("%d", &nivel1);

    if (nivel1 == 1) {
        printf("\nEscolha o Nível 2:\n");
        printf("1 - Quadrúpedes\n");
        printf("2 - Voadores\n");
        printf("3 - Aquáticos\n");
        scanf("%d", &nivel2);

        if (nivel2 == 1) {
            printf("\n Escolha o Nível 3:\n");
            printf("1 - Carnívoros\n");
            printf("2 - Herbívoros\n");
            scanf("%d", &nivel3);

            if (nivel3 == 1) {
                printf("Animal: Leão\n");
            }
            else {
                printf("Animal: Cavalo\n");
            }
        }

        if (nivel2 == 2) {
            printf("\nEscolha o Nível 3:\n");
            printf("1 - Onívoros\n");
            printf("2 - Frugívoros\n");
            scanf("%d", &nivel3);

            if (nivel3 == 1) {
                printf("Animal: Homem\n");
            }
            else {
                printf("Animal: Macaco\n");
            }
        }

        if (nivel2 == 3) {
            printf("\nEscolha o Nível 3:\n");
            printf("1 - Cetáceos\n");
            scanf("%d", &nivel3);

            if (nivel3 == 1) {
                printf("Animal: Baleia\n");
            }
        }
    }

    if (nivel1 == 2) {
        printf("\nEscolha o Nível 2:\n");
        printf("1 - Não voadoras\n");
        printf("2 - Nadadoras\n");
        printf("3 - De rapina\n");
        scanf("%d", &nivel2);

        if (nivel2 == 1) {
            printf("Animal: Avestruz\n");
        }

        if (nivel2 == 2) {
            printf("Animal: Pinguim\n");
        }

        if (nivel2 == 3) {
            printf("Animal: Águia\n");
        }
    }

    if (nivel1 == 3) {
        printf("\nEscolha o Nível 2:\n");
        printf("1 - Com casco\n");
        printf("2 - Carnívoros\n");
        printf("3 - Sem patas\n");
        scanf("%d", &nivel2);

        if (nivel2 == 1) {
            printf("Animal: Tartaruga\n");
        }

        if (nivel2 == 2) {
            printf("Animal: Crocodilo\n");
        }

        if (nivel2 == 3) {
            printf("Animal: Cobra\n");
        }
    }

    if (nivel1 < 1 || nivel1 > 3) {
        printf("Opção inválida. Encerrando o programa.\n");
    }

    return 0;
}