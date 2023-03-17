/*8. Uma revendedora de carros usados paga a seus funcionários vendedores um salário
fixo por mês, mais uma comissão também fixa para cada carro vendido e mais 5% do 
valor das vendas por ele efetuadas. Escrever um algoritmo que leia o número de carros
por ele vendidos, o valor total de suas vendas, o salário fixo e o valor que ele recebe
por carro vendido. Calcule e escreva o salário final do vendedor.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
setlocale(LC_ALL,"portuguese"); /*Acentuação*/

int numeroCarros;
float valorTotalVendas, valorPorCarro;

printf("informe o numero de carros vendidos: ");
scanf("%d", &numeroCarros);

printf("Informe o valor total de suas vendas: ");
scanf("%f", &valorTotalVendas);

printf("Informe valor por carro vendido: ");
scanf("%f", &valorPorCarro);


printf("\n\nNumero de carros vendidos    \t|\t %d", numeroCarros);
printf("\nValor total de vendas          \t|\t %.2f", valorTotalVendas);
printf("\nValor por carro vendido        \t|\t %.2f", valorPorCarro);
printf("\nSalario final do vendedor      \t|\t %.2f", (valorTotalVendas*0.05) + valorPorCarro);



return 0;
}


