#include<stdio.h>
#include<string.h>
typedef struct {
	char rua[10], bairro[10], cidade[10], estado[10], cep[10];
} endereco;
typedef struct {
	char nome[10], identidade[10], cpf[10], estadoCivil[10], telefone[10], sexo[10];
	float salario;
	int idade;
	endereco end;
} cadastro;
int preencherCadastro(cadastro *clientes, int indice);
void maiorIdade(cadastro *clientes, int indice);
void listarMasculino(cadastro *clientes, int indice);
void listarSalario1000(cadastro *clientes, int indice);
void localizarIdentidade(cadastro *clientes, int indice);
void menu();
void verificarVetorVazio(int indice);

int main(){
	cadastro clientes[5];
	int i, indice=0, opcao, opcao2, opcao3;
	char identidadePesquisa[10];
	
	do{
    menu();
	scanf("%d", &opcao2);
	switch (opcao2){
		case 1: 
			do{
				indice = preencherCadastro(clientes, indice); //indice = 1	
				printf("Deseja realizar um novo cadastro? 1 - sim");
				scanf("%d", &opcao); //1
				if(indice>=5)
					printf("Voce nao pode realizar novos cadastros!\n");
			} while(opcao==1 && indice<5);
		break;
		case 2: 
			maiorIdade(clientes, indice);
		break;
		case 3: 
			listarMasculino(clientes, indice);
		break;
		case 4: listarSalario1000(clientes,indice);
		break;
		case 5: localizarIdentidade(clientes,indice);
		break;
		default: printf("Codigo invalido!\n");	
	}
	
	scanf("%d", &opcao3);
} while (opcao3==0);
}

void menu(){
	printf("Digite a opcao desejada: \n");
	printf("1. Cadastro\n");
	printf("2. Maior idade\n");
}

int preencherCadastro(cadastro *clientes, int indice){
	fflush(stdin);
	printf("Digite nome: ");
	fgets(clientes[indice].nome, 10, stdin);
	fflush(stdin);
	printf("Digite idade: ");
	scanf("%d", &clientes[indice].idade);
	fflush(stdin);
	printf("Digite sexo: ");
	fgets(clientes[indice].sexo, 10, stdin);
	fflush(stdin);
	printf("Digite a cidade: ");
	fgets(clientes[indice].end.cidade, 10, stdin);
	fflush(stdin);
	printf("Digite o salario: ");
	scanf("%f", &clientes[indice].salario);
	fflush(stdin);
	printf("Digite a identidade: ");
	fgets(clientes[indice].identidade, 10, stdin);
	fflush(stdin);
	indice++;
	return indice;
}

void maiorIdade(cadastro *clientes, int indice){   // 0-Joyce 38   1-Elisa 36   2-Eliete 62
	int i, maior=-1, indiceDoClienteComMaiorIdade;
	for(i=0; i<indice; i++){
		if(clientes[i].idade>maior){
			maior=clientes[i].idade; //maior = 62
			indiceDoClienteComMaiorIdade = i; //indiceDoClienteComMaiorIdade = 2
		}
	}
	printf("Cliente %s tem a maior idade %d\n", clientes[indiceDoClienteComMaiorIdade].nome, clientes[indiceDoClienteComMaiorIdade].idade);
}
		
void listarMasculino(cadastro *clientes, int indice){
	int i, cont=0;
	printf("Relatorio - Clientes do sexo masculino\n");
	for(i=0; i<indice;i++){
		if (stricmp(clientes[i].sexo, "Masculino")==0){
			printf("%s\t%s\n", clientes[i].nome, clientes[i].sexo);
			cont++;		
		}
	}
	printf("Quantidade de homens: %d\n", cont);	
}


void listarSalario1000(cadastro *clientes, int indice){
	int i, cont=0;
	printf("Relatorio - Clientes com salario maior que 1000 reais\n");
	for(i=0; i<indice;i++){
		if (clientes[i].salario > 1000){
			printf("%s\t%.2f\n", clientes[i].nome, clientes[i].salario);
			cont++;			
		}		
	}
	printf("Quantidade de clientes com salario maior que 1000 reais: %d\n", cont);
}

void localizarIdentidade(cadastro *clientes, int indice){
	int i;
	char identidadePesquisa[10];
	printf("Digite a identidade a ser pesquisada");
	fgets(identidadePesquisa, 10,stdin);
	fflush(stdin);
	for(i=0;i<indice;i++){
		if(strcmp(clientes[i].identidade,identidadePesquisa)==0){
			printf("%s\t%s\n", clientes[i].nome, clientes[i].identidade);
			break;
		}
	}	
}
	
void verificarVetorVazio(int indice){

}




