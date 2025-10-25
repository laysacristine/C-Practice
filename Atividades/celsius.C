conversor celsius para fahrenheit

#include <stdio.h>
//a formula para fazer a conversão é F=(9/5 * ºC) + 32
int main() {
    float celsius, fahrenheit;
    
    printf("Celsius\t| Fahrenheit\n");
    printf("______________________\n");
    //quis colocar um cabeçalho para ficar um pouco bonitinho
    
    for(celsius = 10; celsius <= 100; celsius++) {
        fahrenheit = (celsius * 9 / 5) + 32; 
        
        printf("%.1f\t %.1f\n", celsius, fahrenheit);
    }

    return 0;
}