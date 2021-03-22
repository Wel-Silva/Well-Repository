#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    int qtd_alunos;
    float media = 0, soma = 0;
    bool valida = true;
    
    printf("<< Media de n alunos. Maximo 100 alunos >>");
    printf("\nEntre com o numero de alunos: ");
    scanf("%d", &qtd_alunos);

    float notas[qtd_alunos];

    if(qtd_alunos <= 100){
        
        for(int i = 0; i < qtd_alunos; i++){
            printf("Digite a nota do aluno %d: ",i+1);
            scanf("%f", &notas[i]);
            soma = soma + notas[i];
        }
        media = soma/qtd_alunos;
        printf("Relatorio de Notas\n");
        for(int i = 0; i < qtd_alunos; i++){
            printf("A nota do aluno %d e: %.f\n", i, notas[i]);
        }
    }else{
        printf("Erro! O numero maximo de alunos permitido e 100.");
        valida = false;
    }
    if (valida == true){
    printf("A media da turma e: %.1f", media);
}
}