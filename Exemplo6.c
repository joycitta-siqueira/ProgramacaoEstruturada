main(){
	char *nomes[5]={"Wesley","Vitor", "Shennara Ramadan","Ivo", "Isaac"};
	int i;
	
	for(i=0;i<5;i++){
		printf("%i\n", &nomes[i]);
	}
	
	for(i=0;i<5;i++){
		printf("%s\n", *(nomes+i));
	}
	printf("End Carla: %d\n", (nomes+3));
	printf("Tamanho: %d", sizeof(nomes[2]));
	system("pause");
}
