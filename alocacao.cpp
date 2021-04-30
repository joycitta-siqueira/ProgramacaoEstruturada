//inicializar, inserir e listar os itens de cadastro pessoa em uma lista
//cadastro de pessoa: nome, idade, email

#include<stdio.h>
#include<stdlib.h>
typedef struct lista lista;//criação do tipo "lista"
struct lista { //criei a estrutuda de cada nó da lista
	int codigo; //pode ter quantas variáveis forem necessárias
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
	lista* novo = (lista*) malloc(sizeof(listaCodigos));//alocação de espaço
	printf("Digite o codigo: ");
	scanf("%d",&novo->codigo); //solicitando os dados
	fflush(stdin);
	novo->proximo=listaCodigos; //preenchendo o ponteiro com a proxima posição
	return novo;	
}

void relatorio (lista* listaCodigos){
	for (listaCodigos;listaCodigos!=NULL;listaCodigos=listaCodigos->proximo){
		printf("Codigo: %d\n", listaCodigos->codigo);	
	}
}

lista* remover (lista* listaCodigos){
	lista* anterior; //ponteiro que guarda a posição do elemento anterior
	lista* auxiliar; //lista auxiliar para buscar na listaCodigos
	
	int codigoBusca;
	printf("Digite o codigo do cadastro");
	scanf("%d", &codigoBusca);
	
	for(anterior=NULL, auxiliar=listaCodigos;auxiliar!=NULL && auxiliar->codigo!=codigoBusca; anterior=auxiliar, auxiliar=auxiliar->proximo){
	}
	
	if (auxiliar==NULL){
		printf("codigo nao cadastrado - lista vazia");
		return listaCodigos;
	}
	
	if (anterior==NULL){
		listaCodigos = auxiliar->proximo;
		free(auxiliar);
	}
	else {
		anterior->proximo = auxiliar->proximo;
		free(auxiliar);
	}
	printf("Codigo removido!");
	
	return listaCodigos;
	
}






