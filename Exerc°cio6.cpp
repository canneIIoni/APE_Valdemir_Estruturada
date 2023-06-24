/* 
    LUCA_PAES_BERALDI
    EXERCÍCIO 6
    Faça um algoritmo recebe um valor inteiro e se o número for maior que 10, será impressa a
    frase: "O número e maior que 10". Se o número for menor que 10, será impressa a frase:
    “O número é menor que 10”. Se o número for igual a 10 aparecerá a frase: “Você acertou”.     DATA: 14/03/2023
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <wchar.h>

int main() {
    int numero;
    setlocale(LC_ALL, "");

    wprintf(L"Digite um número: ");
    scanf("%d", &numero);

    if (numero > 10) {
        wprintf(L"O número é maior que 10.\n");
    } else if (numero < 10) {
        wprintf(L"O número é menor que 10.\n");
    } else {
        wprintf(L"Você acertou.\n");
    }

    return 0;
} 
