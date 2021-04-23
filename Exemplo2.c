main(){
	int vetor[10];
	int i;
	
	for(i=0;i<10;i++){
		printf("Digite o valor %i:\n", i+1);
		scanf("%i", (vetor+i));
	}
	
	
	for(i=0;i<10;i++){
		printf("%d\n",(vetor+i));
	}
	printf("\n\n");
}
