/*
Escrever um programa que declare um vetor de reais e leia as notas de 30 alunos.
*/

#include<stdio.h>
int main(){
    double notas[30];
    int i;

    for(i=0;i<3;i++){
        printf("Digite a nota: ");
        scanf("%lf", &notas[i]);
    }

    for(i=0;i<3;i++){
        printf("%.1lf\n", notas[i]);
    }
}
