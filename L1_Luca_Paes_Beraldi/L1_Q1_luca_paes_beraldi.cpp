#include <stdio.h>

// A prefeitura de uma cidade fez uma pesquisa entre seus habitantes,
// coletando dados sobre o salário e o número de filhos. A prefeitura deseja
// saber:
// a) média salarial da população;
// b) média do número de filhos;
// c) maior salário;
// d) percentual de pessoas com salário até R$ 100,00.
// O final da leitura de dados se dará com a entrada de um salário negativo.

//Aluno: Luca Paes Beraldi

#include <stdio.h>

int main()
{
    float salario, somaSalario = 0, maiorSalario = 0;
    int num_filhos, pessoas = 0, filhos = 0, pessoas_100 = 0;

    printf("Digite o salario: \n");
    scanf("%f", &salario);

    printf("Digite o numero de filhos:\n");
    scanf("%d", &num_filhos);

    while (salario >= 0)
    {
        pessoas++;
        somaSalario += salario;
        filhos += num_filhos;

        if (salario > maiorSalario)
        {
            maiorSalario = salario;
        }

        if (salario <= 100)
        {
            pessoas_100++;
        }

        printf("Digite o salario (Digite um numero negativo para encerrar): \n");
        scanf("%f", &salario);

        printf("Digite o numero de filhos:\n");
        scanf("%d", &num_filhos);
    }

    if (pessoas > 0)
    {
        printf("Media salarial da populacao: R$ %.2f\n", somaSalario / pessoas);
        printf("Media de filhos: %.2f\n", (float)filhos / pessoas);
        printf("Maior salario: R$ %.2f\n", maiorSalario);
        printf("Percentual de pessoas com salario ate R$ 100,00: %.2f%%\n", (float)pessoas_100 / pessoas * 100);
    }
    else
    {
        printf("Valor invalido!");
    }

    return 0;
}