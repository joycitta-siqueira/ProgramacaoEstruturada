/* Desenvolva um programa em C utilizando registro que permita a entrada de nome, endereço e telefone de 3 pessoas e os imprima ao final.
*/

#include <stdio.h>

typedef struct endereco
{
    char rua[20];
    char cidade[20];
    char uf[2];
} endTypedef;

typedef struct telefone
{
    char ddd[2];
    char numero[10];
} telTypedef;

typedef struct contato
{
    char nome[10];
    endTypedef end;
    telTypedef tel;
} contatoTypedef;


int main()
{

    contatoTypedef pessoas[10];
    int i=0;


do{
    gets(pessoas[i].nome);
    gets(pessoas[i].end.rua);
    gets(pessoas[i].end.cidade);
    gets(pessoas[i].end.uf);
    gets(pessoas[i].tel.ddd);
    gets(pessoas[i].tel.numero);
    i++;
}while(i<10);




}