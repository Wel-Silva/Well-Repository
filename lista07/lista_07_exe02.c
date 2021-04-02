#include <stdio.h>
#include <stdlib.h>

int main() {

    int L = 3 , C = 3, linha = 0 , coluna = 0;
    int K = 3 , U = 3, linhaM2 = 0, colunaM2 = 0;
    int soma = 0, soma2 = 0;

    int matriz[L][C];
    int matriz2[K][U];


    for(linha = 0; linha < L; linha++){
        for(coluna = 0; coluna < C; coluna++){
            printf("\nDigite o %d valor para a %d linha: ",coluna + 1, linha + 1);
            scanf("%d",&matriz[linha][coluna]);
            soma = soma + matriz[linha][coluna];

        }
    }
     for(linhaM2 = 0; linhaM2 < K; linhaM2++){
        for(colunaM2 = 0; colunaM2 < U; colunaM2++){
            printf("\nDigite o %d valor para a %d linha: ",colunaM2 + 1, linhaM2 + 1);
            scanf("%d",&matriz2[linhaM2][colunaM2]);
            soma2 = soma2 + matriz2[linhaM2][colunaM2];

        }
    }
    for (linha = 0; linha < L; linha++){
        for(coluna = 0; coluna < C; coluna++){
            printf("%d ",matriz[linha][coluna]);
        }
            printf("\n\n");
    }


    int mult = soma * soma2;

    printf("\nA soma total da primeira matriz eh  %d",soma);
    printf("\n\nA soma total da segunta matriz eh  %d\n\n",soma2);
    printf("A multiplicacao entre as duas matrizes e %d\n\n", mult);

    system("pause");
    return 0;
}