#include <string.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>


int main(){

    char nome[50];
    char minusculo[50], maiusculo[50];

    printf("<< Vetor de Char>>\n");

    printf("Digite um nome: ");
    gets(nome);

    for(int i = 0; i < strlen(nome); i++){
        if(nome[i] > 91){
            nome[i] = nome[i] - 32;
        } 
    }
    printf("\nO nome digitado e: %s", nome); 
    

    for(int i = 0; i < strlen(nome); i++){
        if(nome[i] < 91){
            nome[i] = nome[i] + 32;
        }
    }
    printf("\nO nome digitado e: %s", nome); 

   

    return 0;

}
    

