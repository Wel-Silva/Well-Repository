#include <stdlib.h>
#include <stdio.h>

int main(){
    int qtd;
    int alunos[10000];
    char classe_social[10000];  //{'A','B','C','E'}
    float CRA[10000];

    printf("<< Universidade X >>\n");

    printf("Quantos alunos serao cadastrados: ");
    scanf("%d", &qtd);

    for(int i = 0; i < qtd; i++){
        printf("\nEntre com o numero do aluno: ");
        scanf("%d", &alunos[i]);

        printf("Entre com a classe social do aluno %d: ", alunos[i]);
        scanf("%s", &classe_social[i]);

        printf("Entre com o CRA do aluno %d: ", alunos[i]);
        scanf("%f", &CRA[i]);
    }
    printf("\n==== Alunos Cadastrados ====");
    for(int i = 0;i < qtd; i++){
        printf("\nNumero: %d Classe Social: %c CRA: %.2f", alunos[i],classe_social[i],CRA[i]);
    }

}