// ORDENAÇÃO

#include <stdio.h>

int main()
{
    int num[5] = {0, 3, 1, 4, 2}, i, j, aux;

    for (i = 0; i < 4; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            if (num[i] > num[j])
            {
                aux = num[i];
                num[i] = num[j];
                num[j] = aux;
            }
        }
    }

    printf("Vetor ordenado\n");
    for (i = 0; i < 5; i++)
        printf("%d\t", num[i]);
}