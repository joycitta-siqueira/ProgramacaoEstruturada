#include <stdio.h>

typedef struct reg{
	char titulo[30];
	int codlivro;
	float preco;
} reglivro;

int main ( ) {
FILE *arq; 
reglivro livro;
if ((arq = fopen("livros.bin","rb")) == NULL) {
	printf("Erro na abertura do arquivo\n"); 
	return 0;
}
while (fread(&livro, sizeof(livro), 1, arq) == 1) { //fread l� itens de um arquivo bin�rio
	printf("T�tulo: %s\n", livro.titulo);
	printf("Codigo: %d\n", livro.codlivro);
	printf("Pre�o: %f\n", livro.preco);
}
fclose (arq);
return 0;
}















