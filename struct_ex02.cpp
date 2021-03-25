//Desenvolva um programa em C utilizando registro que permita a entrada de 
//nome, endereço e telefone de 3 pessoas e os imprima ao final.

typedef struct agenda {
	char nome[10], endereco[100], telefone[10];
}agenda;
#include<stdio.h>
int main(){
	agenda pessoas[3];
	int i;
	for (i=0;i<3;i++){
		printf("Digite o nome: ");
		fgets(pessoas[i].nome, 10, stdin);
		fflush(stdin);
		printf("Digite o endereco: ");
		fgets(pessoas[i].endereco, 100, stdin);
		fflush(stdin);
		printf("Digite o telefone: ");
		scanf("%s", &pessoas[i].telefone);
		fflush(stdin);
	}
	
	for (i=0;i<3;i++){
		printf("\nImpressao\n");
		printf("Nome: %s", pessoas[i].nome);
		printf("Endereco: %s", pessoas[i].endereco);
		printf("Telefone: %s", pessoas[i].telefone);
	}
	
	
}
