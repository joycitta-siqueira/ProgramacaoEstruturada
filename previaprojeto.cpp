#include <stdio.h>
#include <string.h>

double validarAltura(double alturaValidar);
int incluirUsuario(double *altura, double alturaValidar, int indice, char sexo[][20], char *sexoValidar);
int menu();

int main()
{

    double altura[5], alturaValidar;
    char sexo[5][20], sexoValidar[20];
    int indice = 0, opcao;


    switch (menu())
    {
    case 1: indice = incluirUsuario(altura, alturaValidar, indice, sexo, sexoValidar);       
        break;
    case 2: if (realizarBackup (indice, sexo, altura, sexoBackup, alturaBackup))
                printf("Backup realizado com sucesso!");      
        break;
    case 3:        
        break;
    case 4:        
        break;
    case 5:        
        break;
    case 6:        
        break;
    default: printf("Valor invalido!");
        break;
    }
    

    
}

int menu(){
  int opcao;
    printf("1 - Incluir\n2 - Editar\n3 - Buscar\n4 - Imprimir\n5 - Backup\n6- Restaurar\n");
    scanf("%d", &opcao);
    return opcao;
}

double validarAltura(double alturaValidar)
{
    do
    {
        printf("Digite a altura:\n");
        scanf("%lf", &alturaValidar);
        if (alturaValidar < 1 or alturaValidar > 2)
            printf("invalido\n");
    } while (alturaValidar < 1 or alturaValidar > 2);

    return alturaValidar;
}


char* validarSexo (char *sexoValidar){ 
	do {
		printf("Digite o sexo: ");
		fflush(stdin);
		fgets(sexoValidar, 20, stdin); 
	    if (strcmp(sexoValidar,"Feminino") != 0) 
			printf("Sexo digitado e invalido");
	} while (strcmp(sexoValidar,"Feminino") != 0);
	
    return sexoValidar;
}


int incluirUsuario(double *altura, double alturaValidar, int indice, char sexo[][20], char *sexoValidar)
{ // * -> ponteiro
    strcpy(sexo[indice], validarSexo(sexoValidar)); 
    altura[indice] = validarAltura(alturaValidar);
    indice++;
    return indice;
}

void editar (char sexo[][5], double *altura, int indice){
	int indice;
	char sexo2[5];
    printf("Digite o novo valor\n");
	scanf("%s", &sexo2);

    printf("Digite o id que deseja buscar");
    scanf("%d", &idBusca);

    for(i=0; i < indice; i++){
        if (id[i] == idBusca)
            indiceEdicao = i;
    }

	strcpy(sexo[indiceEdicao], validarSexo(sexo2));
}

void imprimir (char sexo[][5], double *altura, int indice){
    for (int i=0; i< indice; i++)
        printf("%s - %.2lf\n", sexo[i], altura[i]);
}

bool realizarBackup (int indice, char sexo[][5], double *altura, char sexoBackup[][5], double *alturaBackup){
	int i;
	for (i=0; i< indice; i++){
		strcpy(sexoBackup[i], sexo[i]);
		alturaBackup[i] = altura[i];
	}
    return true;
}