#include<stdio.h>
int main(){
	FILE *filePonteiro = fopen("testeamais.txt", "r");
	char ch;
	while ((ch=getc(filePonteiro)) != EOF) //EOF sinaliza o final do arquivo
		//getc: lê arquivo
		printf ("%c", ch);
	fclose(filePonteiro);
}
