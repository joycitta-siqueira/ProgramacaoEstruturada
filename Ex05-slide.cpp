#include<stdio.h>
#include<string.h>
#include<conio.h>
int main(){
	FILE *fptr = fopen ("arqtext.txt", "w");
	char titulo[80];
	int regNum;
	float preco;
	do{
	printf ("\nDigite titulo, registro e preco :");
	scanf ("%s %d %f", &titulo, &regNum , &preco);
	fprintf(fptr, "%s %3d %.2f\n", titulo, regNum, preco);
	printf("\nRegistrar mais um livro: 's' para 'sim' ou 'n' para 'nao'");
	} while(getch()=='s');
	fclose(fptr);
}
