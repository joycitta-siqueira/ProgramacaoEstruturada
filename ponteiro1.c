#include <stdio.h>
int main()
{
    int x, y; // variaveis simples
    int *px;  //ponteiro que aponta para um inteiro
    y = 10;   //atribuição

    printf("Digite o valor de x");
    scanf("%d", &x); //5

    px = &x; //inicializei o ponteiro com o endereço de x

    printf("valor de x = %d\n", x);      //5
    printf("valor de x = %d\n", *px);    //5
    printf("endereco de x = %x\n", &x);  //61ff14
    printf("endereco de px = %x\n", px); //61ff14

    px = &y; //42ab14

    printf("%d\n", y);   //10
    printf("%d\n", *px); //10
    printf("%x\n", &x);  //61ff14
    printf("%x\n", &y);  //42ab14
    printf("%x\n", px);  //42ab14
}