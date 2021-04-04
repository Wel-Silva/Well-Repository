#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>


int main(){

    char nome[40];
    char sobrenome[40];
    int i, t, u = 0, cont = 0;
    int valida;
   

    printf("<< Vetor de Char>>\n");

    printf("Digite um nome e sobrenome: ");
    gets(nome);

    t = strlen(nome);

    for(i = 0; i < t;i++){

        if(nome[i] == ' '){
            valida = 1; 
                         
        }
        if(valida == 1){
            sobrenome[u] = nome[i];
            nome[i] = NULL;
            u++;
        }
        
    }



    printf("Nome: %s\n", nome);
    printf("Sobrenome:%s\n", sobrenome);
   

}