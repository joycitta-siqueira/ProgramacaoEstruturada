/*
Desenvolva um programa em C que contenha um vetor contendo 5 elementos inteiros. 
Utilizando apenas notação de ponteiros, leia esse vetor do teclado e imprima o endereço 
das posições contendo valores pares.
*/

#include<stdio.h>
int main(){
	int vetor[5], i;
	
	for(i=0;i<5;i++){
		scanf("%d", vetor+i);
	}
	
	for(i=0;i<5;i++){
		if(*(vetor+i)%2==0){
			printf("Valor: %d\n", *(vetor+i));
			printf("Endereco: %p\n", vetor+i);	
		}
	}	
}
