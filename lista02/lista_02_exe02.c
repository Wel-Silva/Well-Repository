#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(){

float prova1, prova2, media;
char aluno;

printf("Digite a inicial do aluno: ");
scanf("%c", &aluno);

printf("Digite a nota da prova 1: ");
scanf("%f", &prova1);

printf("Digite a nota da prova 2: ");
scanf("%f", &prova2);


media = (prova1+prova2)/2;

printf("A nota media do aluno %c e %.1f",aluno, media);

}