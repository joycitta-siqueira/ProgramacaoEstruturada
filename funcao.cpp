#include <stdio.h>

float calcularMediaSimples(float nota1, float nota2); //declarar função
float calcularMediaPonderada(float nota1, float nota2);
void imprimirCabecalho();

int main()
{

    float nota1, nota2;

    imprimirCabecalho();

    printf("Digite as notas 1 e 2");
    scanf("%f%f", &nota1, &nota2);

    if (nota1 < 5)
    {
        imprimirCabecalho();
        printf("Media Simples: %.2f\n", calcularMediaSimples(nota1, nota2));
    }
    else
    {
        imprimirCabecalho();
        printf("Media Ponderada: %.2f\n", calcularMediaPonderada(nota1, nota2));
    }

    return 0;
}

float calcularMediaSimples(float nota1, float nota2)
{                //assinatura da minha função
    float media; //variável local
    media = (nota1 + nota2) / 2;
    return media;
}

float calcularMediaPonderada(float nota1, float nota2)
{
    float media;
    media = nota1 * 0.7 + nota2 * 0.3;
    return media;
}

void imprimirCabecalho()
{
    printf("UCB\n");
    printf("Programacao Estruturada\n");
    printf("Joyce Siqueira\n");
}