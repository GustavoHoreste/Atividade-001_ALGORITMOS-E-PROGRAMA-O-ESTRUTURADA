/*5. Faça um algoritmo que leia a idade de uma pessoa expressa em anos, meses e dias e escreva
a idade dessa pessoa expressa apenas em dias. Considerar ano com 365 dias e mês com 30 dias.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
setlocale(LC_ALL,"portuguese"); /*Acentuação*/

int idadeAnos, idadeMeses, idadeDias;

printf("**********Informe sua idade em**********\n");

printf("\nInforme quantos ANOS de vida voce tem: ");
scanf("%d", &idadeAnos);

printf("nInforme quantos MESES de vida voce tem: ");
scanf("%d", &idadeMeses);

printf("nInforme quantos DIAS de vida voce tem: ");
scanf("%d", &idadeDias);

printf("\nSua idade em dias \t|\t %d", ((idadeAnos*365) + (idadeMeses*30)) + idadeDias);
return 0;
}


