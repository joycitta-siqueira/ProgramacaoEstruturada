#include<stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	char nome[20], sexo, sintomas[100];
	int planoSaude, i, Unimed, IPASGO, Climed, Mamed, Plameg;
	
	Unimed=0;
	IPASGO=0;
	Climed=0;
	Mamed=0;
	Plameg=0;
	
	for(i=0;i<5;i++){
	printf("PACIENTE DIGITE O SEU NOME:");
	gets(nome);
	fflush(stdin);
	printf("PACIENTE DIGITE O SEU SEXO: F (feminino), M (masculino)");
	scanf("%c", &sexo);
	fflush(stdin);
	printf("PACIENTE DIGITE O SEU SINTOMAS:");
	gets(sintomas);
	fflush(stdin);
	
	do{
	printf("PACIENTE DIGITE SEU PLANO: 1 Unimed, 2 IPASGO, 3 Climed, 4 Mamed E 5  Plameg! ");
	scanf("%d", &planoSaude);
	fflush(stdin);
	switch (planoSaude){
	   case 1: Unimed=Unimed+1; if (Unimed>1) printf ("Unimed excedido!\n") ;break;
	   case 2: IPASGO=IPASGO+1; if (IPASGO>1) printf ("IPASGO excedido!\n") ;break;
	   case 3: Climed=Climed+1; if (Climed>1) printf ("Climed excedido!\n") ;break;
	   case 4: Mamed=Mamed+1; if (Mamed>1) printf ("Mamed excedido!\n") ; break;
	   case 5: Plameg=Plameg+1; if (Plameg>1) printf ("Plameg excedido!\n") ; break;
	   default: printf("Plano de saúde inválido!\n");} 
	}while (Unimed>1 && IPASGO>1 && Climed>1 && Mamed>1 && Plameg>1);
	
}
}
