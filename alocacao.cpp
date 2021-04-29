//inicializar, inserir e listar os itens de cadastro pessoa em uma lista
//cadastro de pessoa: nome, idade, email

#include<stdio.h>
#include<stdlib.h>
typedef struct lista lista;//cria��o do tipo "lista"
struct lista { //criei a estrutuda de cada n� da lista
	int codigo; //pode ter quantas vari�veis forem necess�rias
	lista *proximo; //obrigatoriamente o ponteiro
};
lista* inicializar();
lista* inserir(lista* listaCodigos);
void relatorio (lista* listaCodigos);
int main(){
	int i;
	lista* listaCodigos;
	listaCodigos = inicializar();
	for(i=0; i<2; i++){
		listaCodigos = inserir(listaCodigos);
	}
	relatorio(listaCodigos);		
}
lista* inicializar(){
	return NULL;
}
lista* inserir(lista* listaCodigos){
	lista* novo = (lista*) malloc(sizeof(listaCodigos));//aloca��o de espa�o
	printf("Digite o codigo: ");
	scanf("%d",&novo->codigo); //solicitando os dados
	fflush(stdin);
	novo->proximo=listaCodigos; //preenchendo o ponteiro com a proxima posi��o
	return novo;	
}

void relatorio (lista* listaCodigos){
	for (listaCodigos;listaCodigos!=NULL;listaCodigos=listaCodigos->proximo){
		printf("Codigo: %d\n", listaCodigos->codigo);	
	}
}






