/*7. O custo de um carro novo ao consumidor � a soma do custo de f�brica com a porcentagem
do distribuidor e dos impostos (aplicados ao custo de f�brica). Supondo que o percentual 
do distribuidor seja de 28% e os impostos de 45%, escrever um algoritmo para ler o custo
de f�brica de um carro, calcular e escrever o custo final ao consumidor.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
setlocale(LC_ALL,"portuguese"); /*Acentua��o*/

float custoFabrica;

printf("Qual o custo de fabricacao do carro: ");
scanf("%f", &custoFabrica);


printf("\n\nCusto de frabrica     \t|\t %.2f", custoFabrica);
printf("\nCusto do distribuidor   \t|\t %.2f", custoFabrica * 0.28);
printf("\nCusto com imposto       \t|\t %.2f", custoFabrica * 0.45);
printf("\nvalor final             \t|\t %.2f", (custoFabrica * 0.28 )  + (custoFabrica * 0.45 ) + custoFabrica);

return 0;
}


