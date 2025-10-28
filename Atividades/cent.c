#include <stdio.h>

int main()
{

	float metros, decimetros, centimetros, milimetros = 0;

/*AQUI EU SOLICITEI PARA INFORMAR O VALOR EM METROS, criei 4 variaveis e atribui o valor de 0
   pois é uma pratica recomendada para inicializar e evitar que ela contenha "lixos" (valores 
   indeterminados da memoria)*/

		printf("Informe qual o valor em metros que deseja converter:\n ");
		scanf("%f",&metros); /*quando for feito o pedido para ler, é nescessario colocar & antes
		da variavel. O %f é para informar o tipo de variavel que sera lido*/

//calcular os valores em decimetros, centimetros e milimetros

		decimetros = metros * 10;
		centimetros = metros * 100;
		milimetros = metros * 1000;

//mostrar na tela o resultado
		printf("%.2f metros equivalem a %.2f decimetros\n", metros, decimetros);
		printf("%.2f metros equivalem a %.2f centimetros\n", metros, centimetros);
		printf("%.2f metros equivalem a %.2f milimetros\n", metros, milimetros);
// %.2f o dois é para limitar as casas decimais 

		//PARA DE ESQUECER O PONTO E VIRGULA POHAAAAAAA ;;;;;;;;;;;;;;;

	return 0;
}