#include <string.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>


int main(){

    char nome[50];
    char nome2[50];
    int retorno;

    printf("<< Vetor de Char>>\n");

    printf("Digite o nome 1: ");
    gets(nome);

    printf("Digite o nome 2: ");
    gets(nome2);

    retorno = strcmp(nome, nome2);


    if (retorno == 0){
        printf("Os nomes sao iguais! ");
    }else{
        printf("Os nomes sao diferentes! ");
    }
    
    

  
   // printf("\nO nome digitado e: %s", nome); 

   

    return 0;

}
    

