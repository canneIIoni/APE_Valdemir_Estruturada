/* 
    LUCA_PAES_BERALDI
    EXERCÍCIO 3
    Faça um programa que recebe a idade de uma pessoa e se idade menor que 30 aparece a mensagem Você é muito jovem. Caso idade maior que 30 anos, o programa não fará nada.
    DATA: 14/03/2023
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <wchar.h>

int main() {
    
    setlocale(LC_ALL, "");
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade < 30) {
        wprintf(L"Você é muito jovem.\n");
    }
    
    system("pause");
    return 0;
} 
