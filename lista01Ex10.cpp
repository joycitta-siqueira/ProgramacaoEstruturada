/*
Elabore um algoritmo que leia um conjunto de valores inteiros correspondentes a até 80 notas, variando de 0 a 10, dos alunos de uma turma (vários alunos). Calcule a frequência de cada nota e apresente uma tabela contendo os valores das notas e suas respectivas frequências.
*/
#include <stdio.h>
int main()
{
    int notas[5] = {5, 5, 5, 1, 10}, i, freq[11] = {0};

    for (i = 0; i < 5; i++)
    {
        switch (notas[i])
        {
        case 0:
            freq[0]++;
            break;
        case 1:
            freq[1]++;
            break;
        case 2:
            freq[2]++;
            break;
        case 3:
            freq[3]++;
            break;
        case 4:
            freq[4]++;
            break;
        case 5:
            freq[5]++;
            break;
        case 6:
            freq[6]++;
            break;
        case 7:
            freq[7]++;
            break;
        case 8:
            freq[8]++;
            break;
        case 9:
            freq[9]++;
            break;
        case 10:
            freq[10]++;
            break;
        }
    }
    printf("Nota - Frequencia\n", i, freq[i]);
    for (i = 0; i <= 10; i++)
    {
        printf("%i - %i\n", i, freq[i]);
    }
}