#include<stdio.h>

struct disciplina{
    char nome[30];
    int ch; 
};

int main(){
    float valor;
    struct disciplina disc;

    disc.ch = 20;

    disc.ch = 20 + disc.ch;

    printf("Digite o nome da disciplina");
    scanf("%s", &disc.nome);
    fgets(disc.nome, 30, stdin);

    printf("Digite a ch da disciplina");
    scanf("%d", &disc.ch);

    printf("Digite o valor da disciplina");
    scanf("%f", &valor);

    printf("%s - %d - %f\n", disc.nome, disc.ch, valor);


}
