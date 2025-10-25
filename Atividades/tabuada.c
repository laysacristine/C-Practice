#include <stdio.h>

    int main(){
    	
        int n, i = 0;
        printf("Qual a tabela da tabuada de multiplicação voce deseja consultar?\n");
        scanf("%d", &n);
        
        for (i=1; i<=10; i++){

            //PARA IR DE 1 ATE 10 FAÇA,  o i ira rodar de 1 ate o num 10 e vai parar

            printf("%d x %d = %d\n", n, i, n*i);
            
        }
        
    return 0;   
}