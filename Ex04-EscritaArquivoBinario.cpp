#include <stdio.h>
#include <ctype.h> //toupper

typedef struct reg{
	char titulo[30];
	int codlivro;
	float preco;
} reglivro;

int main ( ) {
FILE *arq; 
reglivro livro;
int opcao;

arq = fopen("livros.bin","wb");
if (arq == NULL) {
	printf("Erro na criação do arquivo\n"); 
	return 0;
	}
		
do {
	printf("Digite o titulo:"); 
	scanf("%s", &livro.titulo);
	fflush(stdin);
	printf("Digite o codigo:"); 
	scanf("%d", &livro.codlivro);
	fflush(stdin);
	printf("Digite o Preco:"); 
	scanf("%f", &livro.preco);
	fflush(stdin);
	fwrite (&livro, sizeof(livro), 1, arq);  //fwrite escreve itens em um arquivo binário
	/*
	Parâmetros:
	1. variável com os itens a serem escritos no arquivo
	2. Número de bytes do item escrito; usa-se o sizeof
	3. Quantidade de itens a serem escritos
	4. Ponteiro de arquivo (nome lógico do arquivo)
	*/
	printf("Adiciona outro livro (S/N)? ");
	scanf("%d", &opcao);
	
} while (opcao == 1);

fclose (arq); 
return 0;
}
