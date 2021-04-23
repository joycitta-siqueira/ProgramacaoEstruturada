#include<stdio.h>
main(){
	int x, y;
	int *px;
	x=10;
	y=15;
	px = &x;
	//printf("End x: %d\n", &x);
	//printf("End y: %d\n", &y);
	printf("Valor de x: %i\n", *px);
	px = px-1;
	printf("Valor de y: %i\n", *px);
	
	
	
}
