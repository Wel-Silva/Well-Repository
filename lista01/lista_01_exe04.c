#include <stdio.h>
#include <stdlib.h>

int main(){
    int nota1, nota2, nota3, nota4;
    double media;

    printf("\nDigite a nota1: \n");
    scanf("%d", &nota1);

    printf("\nDigite a nota2: \n");
    scanf("%d", &nota2);

    printf("\nDigite a nota3: \n");
    scanf("%d", &nota3);

    printf("\nDigite a nota4: \n");
    scanf("%d", &nota4);

    media = (nota1 + nota2 + nota3 +nota4)/4;

    printf("Nota 1: %d; Nota 2: %d; Nota 3: %d; Nota 4: %d Media: %.0f", nota1,nota2,nota3,nota4, media);

}