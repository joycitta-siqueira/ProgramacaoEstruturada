void leValidaNome(char *nm);
main(){
	char nome[25];
	printf("End nome: %d\n", nome);
	leValidaNome(nome);
	printf("Nome: %s\n", nome);
	
}
void leValidaNome(char *nm){
	printf("End nm: %d\n", nm);
	do{
		puts("Digite um nome:");
		gets(nm);
		if(strcmp(nm,"")==0)
			puts("Campo obrigatorio!");
	}while(strcmp(nm,"")==0);
}
