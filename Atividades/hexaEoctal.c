#include <stdio.h>

    //LEMBRAR DO PONTO VIRGULA ;;

    int main() {
        int numDecimal = 0;


        /*quando vc pensa em numero decimal ja vem logo float na cabeça, mas não é possivel 
        usar float nesse programa (com parte decimal) para converter em sistemas numéricos
        de base diferente (hexadecimal ou octal) porque essas conversões são definidas para números
        inteiros. Floats representam números fracionários e não possuem um mapeamento direto para
        sistemas que só lidam com valores inteiros, sendo necessário primeiro extrair
        a parte inteira de um float para realizar a conversão*/


        printf("Qual numero decimal deseja converter para hexadecimal e octal?\n");
        scanf("%d", &numDecimal);
        /*então eu fiz o pedido do numero que desejam converter e dessa vez não usei o 
        %f e sim o %d pois são variaveis de tipos diferentes o %f é usado para o tipo float 
        e o %d para tipos inteiros*/
        
        printf("Número Decimal: %.2d\n", numDecimal);
        printf("Hexadecimal: %x\n", numDecimal); 

        /* O especificador %x instrui printf a exibir
         o valor da variável numDecimal na sua representação hexadecimal. */

        printf("Hexadecimal (MAIÚSCULAS): %X\n", numDecimal);
        printf("Octal: %o\n", numDecimal); 
        /* O especificador %o instrui printf a exibir
         o valor da variável numDecimal na sua representação octal. */
        

    return 0;
}