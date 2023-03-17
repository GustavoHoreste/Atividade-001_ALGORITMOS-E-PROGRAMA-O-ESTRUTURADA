/*4. Escreva um algoritmo para ler as dimensões de um retângulo (base e altura), calcular e escrever a área do retângulo.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
setlocale(LC_ALL,"portuguese"); /*Acentuação*/

float base, altura;

printf("Informe a base do retangulo: ");
scanf("%f", &base);

printf("Informe a altura do retangulo: ");
scanf("%f", &altura);

printf("\nArea do retangulo \t|\t %.2fcm ", (base * altura));
return 0;
}


