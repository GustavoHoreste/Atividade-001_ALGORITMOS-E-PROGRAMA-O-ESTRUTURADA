/*6. Escreva um algoritmo para ler o sal�rio mensal atual de um funcion�rio
 e o percentual de reajuste. Calcular e escrever o valor do novo sal�rio.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
setlocale(LC_ALL,"portuguese"); /*Acentua��o*/

float salarioAtual, porcentualReajuste;

printf("Informe do salerio mensal do funcionario: ");
scanf("%f", &salarioAtual);

printf("Informe a procentagem de reajuste: ");
scanf("%f", &porcentualReajuste);

printf("\nValor do salario apos reajuste \t|\t %.2f", ((salarioAtual * porcentualReajuste) / 100) + salarioAtual);
return 0;
}


