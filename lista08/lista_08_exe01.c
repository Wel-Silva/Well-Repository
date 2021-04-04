#include <string.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>


int main(){

    char nome[50];

    printf("<< Vetor de Char>>\n");

    printf("Digite um nome: ");
    gets(nome);

    printf("O nome digitado e: %s", nome); 
    return 0;

}
    

