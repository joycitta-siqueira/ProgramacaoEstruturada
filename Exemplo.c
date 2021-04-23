#include<stdio.h>
main(){
	int x, y;
	int *px;
	y=10;
	
	printf("Digite um valor inteiro:\n");
	scanf("%i", &x);
	px = &x;
	
	printf("Valor de x = %i\n\n", x);
	printf("Valor de x = %i\n\n", *px);
	printf("Endereco de x = %d\n", &x);
	printf("Endereco de px = %d\n", px);
	
	px = &y;
	
	printf("Valor de y = %i\n\n", y);
	printf("Valor de y = %i\n\n", *px);
	printf("Endereco de x = %d\n", &x);
	printf("Endereco de y = %d\n", &y);
	printf("Endereco de px = %d\n", px);
}
