#include<stdio.h>
#include<conio.h>
int main (){
	FILE *enderecoArquivo = fopen ("testeamais.txt", "w");
	char ch; //em tempo de execução
	printf ("Digite varios caracteres:");
	while ((ch=getche()) != '\r')
		putc(ch, enderecoArquivo);//escrever no arquivo
	fclose(enderecoArquivo);
}
