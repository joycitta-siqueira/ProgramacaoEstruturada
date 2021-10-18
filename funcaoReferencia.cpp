#include<stdio.h>
void incluirId (int *id);
void editarId (int *id);
void imprimirVetor (int *id);
int main(){

    int id[10], i;

do{
printf("Digite 1, para incluir um elemento, 2 para Editar, 3 para imprimir");
scanf("%d", &opcao);
switch (opcao)
{
    case 1: incluirId(id);  break;
    case 2: editarId(id); break;
    case 3: imprimirVetor (id); break;
    default: printf("Codigo invalido");
}
while();
 
}

void incluirId (int *id){

 
}

void editarId (int *id){
    int idPesquisa, i;
    printf("Qual id vc deseja editar?");
    scanf("%d", &idPesquisa);
    for(i=0;i<10;i++){
        if (idPesquisa == id[i])
            printf("Digite o novo id");
            scanf("%d", id[i]);
    }
}

void imprimirVetor (int *id){
   int i;
    for(i=0;i<10;i++){
        scanf("%d", &id[i]);
    }

}

