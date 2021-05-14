#include<stdio.h>
#include<string.h>
int main(){
	
	FILE *fptr;
	char nomeProduto[80];
	fptr = fopen("aulaArquivo.txt", "r");
	fputs("Nome do Produto", fptr);
	fputs("\n", fptr);	
	while(fgets(nomeProduto, 80, fptr)!= NULL){
		printf("%s", nomeProduto);
		fputs("\n", fptr);
	fclose(fptr);
}
