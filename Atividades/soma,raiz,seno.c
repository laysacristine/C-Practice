#include <stdio.h>
#include <math.h>

    int main() {
        int x, y = 0; 
        double raiz, raizQ, senoD, dife = 0;
        
        printf("Digite o primero numero:");
        scanf("%d", &x);
        printf("Digite o segundo numero:");
        scanf("%d", &y);
        
        printf("A soma é: %d\n",x+y);
      
        printf("o produto de %d pelo quadrado do %d é: %d\n",x,y, x * (y*y));
      
        printf("O quadrado de %d: %d\n",x, x*x);
        
        raiz = (x*x+y*y);
        raizQ = sqrt (raiz);
        printf("A raiz quadrada da soma dos quadrados é: %.2f\n", raizQ);
        
        dife = (x - y);
        double dife_rad = dife * M_PI / 180.0; 
        senoD = sin(dife);
        printf("O seno da diferença do %d por %d é: %.2f\n", x, y, senoD);
        
        printf("O módulo de %d por %d é: %d\n", x, y, x%y);

    return 0;
}