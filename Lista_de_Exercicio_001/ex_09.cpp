/*9. Fa�a um algoritmo que leia tr�s notas de um aluno, calcule e escreva
 a m�dia final deste aluno. Considerar que a m�dia � ponderada e que o peso
das notas � 2, 3 e 5. F�rmula para o c�lculo da m�dia final � ((n1*2)+(n2*3)+(n3*5))/2+3+5*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
setlocale(LC_ALL,"portuguese"); /*Acentua��o*/

float nota1, nota2, nota3;

printf("Digite o valor da sua primeira nota: ");
scanf("%f", &nota1);

printf("Digite o valor da sua segunda nota: ");
scanf("%f", &nota2);

printf("Digite o valor da sua terceira nota: ");
scanf("%f", &nota3);


printf("\n\nNota 1      \t|\t %.2f", nota1);
printf("\nNota 2      \t|\t %.2f", nota2);
printf("\nNota 3      \t|\t %.2f", nota3);
printf("\nMedia final \t|\t %.2f", ((nota1*2) + (nota2*3) + (nota3*5)) / (2+3+5));

return 0;
}


