#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(){

float prova1, prova2, prova3, media;
char aluno;
int peso1 = 1;
int peso2 = 2;

printf("Digite a inicial do aluno: ");
scanf("%c", &aluno);

printf("Digite a nota da prova 1: ");
scanf("%f", &prova1);

printf("Digite a nota da prova 2: ");
scanf("%f", &prova2);

printf("Digite a nota da prova 3: ");
scanf("%f", &prova3);


media = (((prova1*peso1)+(prova2*peso1)+(prova3*peso2))/(peso1+peso1+peso2));

printf("A nota media do aluno %c e %.0f",aluno, media);

}