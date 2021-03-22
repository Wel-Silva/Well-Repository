#include <stdio.h>
#include <stdlib.h>

int main(){

int vet[6] ;

printf("<< Listando um vetor >>\n");

for(int i = 0; i < 6; i++){

printf("Entre com o numero %d: ", (i+1));
scanf("%d", &vet[i]);

}

    printf("Os valores lidos sao: %d %d %d %d %d %d",vet[0],vet[1],vet[2],vet[3],vet[4],vet[5]);

}