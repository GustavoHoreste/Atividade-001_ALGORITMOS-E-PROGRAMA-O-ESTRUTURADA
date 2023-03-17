/*2. Escreva um programa que pergunte qual o raio de um círculo e imprima a sua área. */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
setlocale(LC_ALL,"portuguese"); /*Acentuação*/

float raio, pi = 3.14;

printf("Informe o raio do circulo: ");
scanf("%f", &raio);

printf("\nArea do circulo \t|\t %.2f", pi * (raio * raio));

return 0;
}


