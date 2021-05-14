#include<stdio.h>
#include<string.h>
#include<conio.h>
int main(){
	FILE *fptr;
	char nomeProduto[80];
	fptr = fopen ("arqtext.txt", "w");
	fputs("Nome do Produto", fptr);
	fputs("\n", fptr);
	while (strlen(gets(nomeProduto))>0){
		fputs(nomeProduto, fptr);
		fputs("\n", fptr);
	}
	fclose(fptr); 
}
