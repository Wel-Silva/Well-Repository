#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(){

float prova1, prova2, prova3;
char aluno;
int peso1 = 1;
int peso2 = 2;
int peso3 = 3;

printf("Digite a inicial do aluno: ");
scanf("%c", &aluno);

printf("Digite a nota da prova 1: ");
scanf("%f", &prova1);

printf("Digite a nota da prova 2: ");
scanf("%f", &prova2);

printf("Digite a nota da prova 3: ");
scanf("%f", &prova3);


double media = (((prova1*peso1)+(prova2*peso2)+(prova3*peso3))/(peso1+peso2+peso3));

printf("A nota media do aluno %c. e %.13f",aluno, media);

}