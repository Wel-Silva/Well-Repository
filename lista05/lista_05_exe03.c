#include <stdio.h>
#include <stdlib.h>

int main(){

int i, j=6;
int vet[6] ;
int vet2[6];

printf("<< Listando um vetor >>\n");

for(i = 0; i < 6; i++){
printf("Entre com o numero %d: ", (i+1));
scanf("%d", &vet[i]);

vet2[j] = vet[i];
j--;
}

       printf("Os valores lidos sao: %d %d %d %d %d %d"
       ,vet2[1],vet2[2],vet2[3],vet2[4],vet2[5],vet2[6]);

}