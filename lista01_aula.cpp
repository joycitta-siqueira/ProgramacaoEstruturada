//Faça um programa em C que armazene em um vetor 3 valores, 
//e imprima os valores utilizando a notação de ponteiro.
#include<stdio.h>
int main(){
	char vetor[3];
	int i;
	
	for(i=0;i<3;i++){
		printf("Digite os valores:\n");
		scanf("%lf", vetor+i);//scanf("%d", &vetor[i]);
		printf("Valor impresso:\n");
		printf("Endereco: %x - Valor: %lf\n", vetor+i, *(vetor+i));//printf("%d\t", vetor[i]);
	}	
}
