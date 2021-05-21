#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
main()
{
      struct{
             char titulo[30];
             int regnum;
             float preco;
             } livro;
      FILE *fptr;
      char tituloP[30];
      if((fptr = fopen("livrosteste.bin", "rb")) == NULL){//serve tb para txt
               printf("\n Nao posso abrir arquivo livros.txt");
               system("PAUSE");
               exit(1);
               }
               printf("titulo");
               scanf("%s", tituloP);
               while(fread(&livro, sizeof(livro), 1, fptr) == 1){
               	if(strcmp(tituloP,livro.titulo)==0){
                       printf("\nTitulo: %s\n", livro.titulo);
                       printf("\nRegistro: %03d\n", livro.regnum);
                       printf("\nPreco: %.2f\n", livro.preco);
                       }
                }
           fclose(fptr);
      system("PAUSE");
}
