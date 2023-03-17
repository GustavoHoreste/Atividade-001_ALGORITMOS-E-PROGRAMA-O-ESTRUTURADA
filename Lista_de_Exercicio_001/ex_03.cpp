/*3. Faça um programa que calcule a quantidade necessária de latas de tinta 
para pintar uma parede. O programa pergunta as medidas de largura e altura 
da parede em metros e escreve quantas latas de tinta serão necessárias para
pintá-la. Considere que o consumo de tinta é de 300 ml por metro quadrado 
e a quantidade de tinta por lata é de 2 litros.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
setlocale(LC_ALL,"portuguese"); /*Acentuação*/

    float largura, altura, area, consumo_tinta, qtde_latas;
    const float CONSUMO_TINTA = 0.3, QTDE_TINTA_LATA = 2;
    
    printf("Digite a largura da parede em metros: ");
    scanf("%f", &largura);

    printf("Digite a altura da parede em metros: ");
    scanf("%f", &altura);

    area = largura * altura;
    consumo_tinta = area * CONSUMO_TINTA;
    qtde_latas = consumo_tinta / QTDE_TINTA_LATA;
    if (qtde_latas - (int)qtde_latas > 0)
        qtde_latas = (int)qtde_latas + 1;
	
    printf("\nQuantidade de latas de tinta necessarias \t|\t %.0f\n", qtde_latas);

    return 0;
}


