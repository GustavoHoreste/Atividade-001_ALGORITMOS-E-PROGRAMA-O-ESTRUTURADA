/*4. Escreva um algoritmo para ler as dimens�es de um ret�ngulo (base e altura), calcular e escrever a �rea do ret�ngulo.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
setlocale(LC_ALL,"portuguese"); /*Acentua��o*/

float base, altura;

printf("Informe a base do retangulo: ");
scanf("%f", &base);

printf("Informe a altura do retangulo: ");
scanf("%f", &altura);

printf("\nArea do retangulo \t|\t %.2fcm ", (base * altura));
return 0;
}


