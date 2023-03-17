/*1. Faça um programa em que o usuário digite o custo de uma determinada mercadoria,
 em seguida, adiciona-se ao custo o valor do frete e despesas eventuais 
 (também solicitadas pelo teclado). Para concluir, o programa pergunta 
 qual o valor de venda e indica a percentagem de lucro da mercadoria*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
setlocale(LC_ALL,"portuguese"); /*Acentuação*/

float valorMercadoria, despesasEventuais, valorVendaMercadoria, diferencaDeValor;

printf("Informe o valor da mercadoria: ");
scanf("%f", &valorMercadoria);

printf("\nInforme o valor do custo de frete e despesas eventuais: ");
scanf("%f", &despesasEventuais);

printf("\nInforme o valor que a mercadoria será vendida ao consumidor final: ");
scanf("%f", &valorVendaMercadoria);

diferencaDeValor = (valorVendaMercadoria) - (valorMercadoria + despesasEventuais);

printf("\n\nValor da mercadoria                      \t|\t %.2f", valorMercadoria);
printf("\nValor de custor adicionais                 \t|\t %.2f", despesasEventuais);
printf("\nValor da mercadoria para o cosumidor final \t|\t %.2f", valorVendaMercadoria);
printf("\nPorcentagem do lucro                       \t|\t %.2f", (diferencaDeValor / valorVendaMercadoria) * 100 );

return 0;
}


