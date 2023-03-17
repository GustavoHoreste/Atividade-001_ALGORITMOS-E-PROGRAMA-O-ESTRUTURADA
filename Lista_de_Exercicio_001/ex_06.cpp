/*6. Escreva um algoritmo para ler o salário mensal atual de um funcionário
 e o percentual de reajuste. Calcular e escrever o valor do novo salário.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
setlocale(LC_ALL,"portuguese"); /*Acentuação*/

float salarioAtual, porcentualReajuste;

printf("Informe do salerio mensal do funcionario: ");
scanf("%f", &salarioAtual);

printf("Informe a procentagem de reajuste: ");
scanf("%f", &porcentualReajuste);

printf("\nValor do salario apos reajuste \t|\t %.2f", ((salarioAtual * porcentualReajuste) / 100) + salarioAtual);
return 0;
}


