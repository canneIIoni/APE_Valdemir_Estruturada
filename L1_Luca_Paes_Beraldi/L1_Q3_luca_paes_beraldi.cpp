#include <stdio.h>

// Elabore um programa que faça o sorteio de vários números e ao final
// mostra:
// a) A quantidade de números sorteados;
// b) O Maior numero sorteado;
// c) Quantos números pares foram sorteados;
// Observação: O programa deve finalizar quando for sorteado o valor 0
// (zero)e utilizar no máximo 3 variáveis não utilizar vetores ou matrizes.

//Aluno: Luca Paes Beraldi

int main() {
    int count = 0;        
    int max = 0;          
    int pares = 0;       
    int numero;          
    
    while (1) {
        printf("Digite um numero (ou 0 para sair): ");
        scanf("%d", &numero);
        
        if (numero == 0) {
            break;
        }
        
        count++; 
        
        if (numero > max) {
            max = numero; 
        }
        
        if (numero % 2 == 0) {
            pares++; 
        }
    }
    
    printf("Quantidade de numeros sorteados: %d\n", count);
    printf("Maior numero sorteado: %d\n", max);
    printf("Quantidade de numeros pares sorteados: %d\n", pares);
    
    return 0;
}