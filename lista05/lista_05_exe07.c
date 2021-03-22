#include <stdio.h>
#include <stdlib.h>

int main(){

    int notas[5];
    int maior = 1, menor = 1;

    printf("<<Normalizando as notas>>\n");

    for(int i = 0; i < 5; i++){
        printf("Entre com a nota do aluno %d: ", i+1);
        scanf("%d", &notas[i]);
    }
    printf("Notas normalizadas\n");
    for(int i = 0; i < 5; i++){
        printf("A nota do aluno %d e %d\n", i+1, notas[i]*2);

    }

}