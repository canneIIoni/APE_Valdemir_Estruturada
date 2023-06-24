/* 
    LUCA_PAES_BERALDI
    EXERCÍCIO 1
    Programa que calcule a média de 5 notas de um aluno.
    DATA: 14/03/2023
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <wchar.h>

int main() {

    setlocale(LC_ALL, "");

    float num1, num2, num3, num4, num5, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &num1);

    printf("Digite a segunda nota: ");
    scanf("%f", &num2);

    printf("Digite a terceira nota: ");
    scanf("%f", &num3);

    printf("Digite a quarta nota: ");
    scanf("%f", &num4);

    printf("Digite a quinta nota: ");
    scanf("%f", &num5);

    media = (num1 + num2 + num3 + num4 + num5) / 5;

    wprintf(L"A média das notas é: %.2f\n", media);

    system("pause");
    return 0;
}