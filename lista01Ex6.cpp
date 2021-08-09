/*
Fazer um algoritmo/programa que leia a matricula e o salário dos funcionários de uma empresa (máximo de 100 funcionários). Após a leitura de todos os dados, informe em uma tela limpa os dados lidos e o maior e menor salário dos funcionários. O maior e menor salário deverão ser obtidos, cada um, por uma função. Sabe-se ainda que não existe matrícula repetida na empresa.
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char matricula[3][3];
    float salario[3], menorValor = 100000, maiorValor = 0;
    int i;

    for (i = 0; i < 3; i++)
    {
        printf("Digite o numero da matricula: ");
        scanf("%s", &matricula[i]);
        printf("Digite o salario: ");
        scanf("%f", &salario[i]);
    }
    system("clear||cls"); //limpar tela

    printf("Matricula - Salario\n");
    for (i = 0; i < 3; i++)
        printf("%s - %.2f\n", matricula[i], salario[i]);

    for (i = 0; i < 3; i++)
    {
        if (salario[i] < menorValor)
            menorValor = salario[i];
    }
    printf("Menor valor: %.2f\n", menorValor);

    for (i = 0; i < 3; i++)
    {
        if (salario[i] > maiorValor)
            maiorValor = salario[i];
    }
    printf("Maior valor: %.2f\n", maiorValor);
}
