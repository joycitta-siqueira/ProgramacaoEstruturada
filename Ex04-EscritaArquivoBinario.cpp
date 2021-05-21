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
	printf("Erro na cria��o do arquivo\n"); 
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
	fwrite (&livro, sizeof(livro), 1, arq);  //fwrite escreve itens em um arquivo bin�rio
	/*
	Par�metros:
	1. vari�vel com os itens a serem escritos no arquivo
	2. N�mero de bytes do item escrito; usa-se o sizeof
	3. Quantidade de itens a serem escritos
	4. Ponteiro de arquivo (nome l�gico do arquivo)
	*/
	printf("Adiciona outro livro (S/N)? ");
	scanf("%d", &opcao);
	
} while (opcao == 1);

fclose (arq); 
return 0;
}
