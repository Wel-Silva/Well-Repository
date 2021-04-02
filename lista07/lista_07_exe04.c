#include <stdio.h>
#include <stdlib.h>

int main(){

    
    int L = 5, C = 8, linha = 0, coluna = 0;

    int matriz[L] [C];

    int menor;

     for(linha = 0; linha < L; linha++){
        for(coluna = 0; coluna < C; coluna++){
            printf("\nDigite o %d valor para a %d linha: ",coluna + 1, linha + 1);
            scanf("%d",&matriz[linha][coluna]);

            
            

        }
    }

}