/*2. Escreva um programa que pergunte qual o raio de um c�rculo e imprima a sua �rea. */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
setlocale(LC_ALL,"portuguese"); /*Acentua��o*/

float raio, pi = 3.14;

printf("Informe o raio do circulo: ");
scanf("%f", &raio);

printf("\nArea do circulo \t|\t %.2f", pi * (raio * raio));

return 0;
}


