#include <stdio.h>

int main()
{
    double nota1[5], nota2[5], media[5];
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("Digite a nota 1: \n");
        scanf("%lf", &nota1[i]);
        printf("Digite a nota 2: \n");
        scanf("%lf", &nota2[i]);
        media[i] = (nota1[i] + nota2[i]) / 2;
    }

    printf("Nota 1 - Nota 2 - Media\n");
    for (i = 0; i < 5; i++)
    {
        if (media[i] > 9.5)
            printf("%.1lf - %.1lf - %.1lf - APROVADO\n", nota1[i], nota2[i], media[i]);
        else
            printf("%.1lf - %.1lf - %.1lf - REPROVADO\n", nota1[i], nota2[i], media[i]);
    }
}
