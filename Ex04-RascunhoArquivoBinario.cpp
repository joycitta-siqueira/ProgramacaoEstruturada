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


while (fread(&livro, sizeof(livro), 1, arq) == 1) { //fread lê itens de um arquivo binário
	printf("Título: %s\n", livro.titulo);
	printf("Codigo: %d\n", livro.codlivro);
	printf("Preço: %f\n", livro.preco);
}

do{
printf("Digite a opção: w - inserir livro, r - ler lista de livro");
scanf("%c", &letra);
switch (letra){
	case 'w':
		do{
			arq = fopen("livros.bin","ab+");
			printf("Digite o titulo:"); 
			scanf("%s", &livro.titulo);
			fflush(stdin);
			printf("Digite o codigo:"); 
			scanf("%d", &livro.codlivro);
			fflush(stdin);
			printf("Digite o Preco:"); 
			scanf("%f", &livro.preco);
			fflush(stdin);
			fwrite (&livro, sizeof(livro), 1, arq); 
			printf("Adiciona outro livro (S/N)? ");
			scanf("%d", &opcao);
		} while (opcao == 1);
		fclose(arq);
	break;
	case 'r':
		arq = fopen("livros.bin","rb")
		while (fread(&livro, sizeof(livro), 1, arq) == 1) { //fread lê itens de um arquivo binário
		printf("Título: %s\n", livro.titulo);
		printf("Codigo: %d\n", livro.codlivro);
		printf("Preço: %f\n", livro.preco);
	}
	fclose(arq);
	break;
	default: printf("codigo invalido!");
	}
	printf("Adiciona outro livro (S/N)? ");
	scanf("%d", &opcao);
} while (opcao == 1);
}
	
	
}




fclose (arq);
return 0;
}















