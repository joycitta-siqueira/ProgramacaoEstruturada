/*
Uma grande empresa deseja saber quais os três empregados mais recentes. Fazer um algoritmo para ler um número indeterminado de informações (máximo de 50) contendo a matrícula funcional do empregado e o número de meses de trabalho deste empregado. Mostre os três empregados mais recentes. Não existem dois empregados admitidos no mesmo mês e a matrícula igual a zero ‘0’ encerra a leitura. Observe o exemplo abaixo:
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char matricula[3][50], aux2[3];
    int mes[50], i = 0, cont = 0, aux, j;

    do
    {
        printf("Digite a matricula\n");
        scanf("%s", &matricula[cont]);
        printf("Digite a quantidade de meses\n");
        scanf("%d", &mes[cont]);
        cont++;
    } while (strcmp(matricula[cont - 1], "0") != 0 && cont - 1 < 50);

    for (i = 0; i < cont - 2; i++)
    {
        for (j = 1; j < cont - 1; j++)
        {
            if (mes[i] > mes[j])
            {
                aux = mes[i];
                strcpy(aux2, matricula[i]);

                mes[i] = mes[j];
                strcpy(matricula[i], matricula[j]);

                mes[j] = aux;
                strcpy(matricula[j], aux2);
            }
        }
    }

    for (i = 0; i < cont - 1; i++)
        printf("Matricula %s - Meses %d\n", matricula[i], mes[i]);
}