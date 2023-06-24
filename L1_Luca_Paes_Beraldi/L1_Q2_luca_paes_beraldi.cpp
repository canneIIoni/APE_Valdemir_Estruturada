#include <stdio.h>

// . Chico tem 1,50 metro e cresce 2 centímetros por ano, enquanto Zé tem
// 1,10 metro e cresce 3 centímetros por ano. Faça um programa em C que
// recebendo a altura e o crescimento anual de duas pessoas calcule e
// imprima quantos anos serão necessários para que a mais baixa seja
// maior que a outra. Caso isto não ocorra em 100 anos informar mensagem
// de impossibilidade.
// Encerre a entrada de dados quando for digitada uma idade negativa.
// (Não use vetores ou matrizes).

//Aluno: Luca Paes Beraldi

int main() {
    float altura1 = 0, altura2 = 0, crescimento1 = 0, crescimento2 = 0;
    int anos = 0;
    
    printf("\nDigite a altura inicial da primeira pessoa em metros: ");
    scanf("%f",  &altura1);
    printf("\nDigite a altura inicial da segunda pessoa em metros: ");
    scanf("%f", &altura2);
    printf("\nDigite o crescimento anual da primeira pessoa em metros: ");
    scanf("%f", &crescimento1);
    printf("\nDigite o crescimento anual da segunda pessoa em metros: ");
    scanf("%f", &crescimento2);
    
    while (altura2 <= altura1 && anos < 100) {
        printf("\nAno: %d\n", anos + 1);
        printf("\nAltura da primeira pessoa: %.2f metros\n", altura1);
        printf("\nAltura da segunda pessoa: %.2f metros\n", altura2);
        
        altura1 += crescimento1;
        altura2 += crescimento2;
        
        anos++;
    }
    
    if (anos == 100) {
        printf("Impossibilidade de uma pessoa ficar mais alta que a outra em 100 anos.\n");
    } else {
        printf("\nAnos necessarios: %d\n", anos);
    }
    
    return 0;
}