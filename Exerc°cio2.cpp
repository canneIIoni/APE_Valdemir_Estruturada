/* 
    LUCA_PAES_BERALDI
    EXERCÍCIO 2
    Um programa que calcule a área do triângulo.     
    DATA: 14/03/2023
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <wchar.h>

int main() {

  
    setlocale(LC_ALL, "");
    float base, altura, area;
    
    wprintf(L"Digite a base do triângulo: ");
    scanf("%f", &base);
    wprintf(L"Digite a altura do triângulo: ");
    scanf("%f", &altura);

    area = (base * altura) / 2;

    wprintf(L"A área do triângulo é: %2.f\n", area);

    system("pause");
    return 0;
}