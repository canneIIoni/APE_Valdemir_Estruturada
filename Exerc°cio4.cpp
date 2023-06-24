/* 
    LUCA_PAES_BERALDI
    EXERCÍCIO 4
    Faça um programa que entra com a idade de uma pessoa e se idade maior que 70 anos, aparece a mensagem Velho. Se idade maior que 21 anos, Adulto. Se idade menor que 21 anos, Jovem.     
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

    if (idade > 70) {
        printf("\nVelho.");
    } else if (idade > 21) {
        printf("\nAdulto.");
    } else {
        printf("\nJovem.");
    }

    system("pause");
    return 0;
}