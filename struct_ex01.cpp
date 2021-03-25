//Desenvolva um programa em C utilizando registro que permita a entrada de 
//nome, endereço e telefone de 3 pessoas e os imprima ao final.

typedef struct agenda {
	char nome[10], endereco[100], telefone[10];
}agenda;
#include<stdio.h>
int main(){
	agenda pessoa1;
	int i;
	for (i=0;i<3;i++){
		printf("Digite o nome: ");
		fgets(pessoa1.nome, 10, stdin);
		fflush(stdin);
		printf("Digite o endereco: ");
		fgets(pessoa1.endereco, 100, stdin);
		fflush(stdin);
		printf("Digite o telefone: ");
		scanf("%s", &pessoa1.telefone);
		fflush(stdin);
		printf("\nImpressão\n");
		printf("Nome: %s\n", pessoa1.nome);
		printf("Endereco: %s\n", pessoa1.endereco);
		printf("Telefone: %s\n", pessoa1.telefone);
	}
	
	
}
