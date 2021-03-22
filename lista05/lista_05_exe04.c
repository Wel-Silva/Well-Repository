#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("<< Listando um vetor de números pares>>\n");

    int num[6];

        for(int i = 0; i < 6; i++){
        printf("Entre com o numero %d:",i+1);
        scanf("%d", &num[i]);
            if(num[i]%2 != 0){
               printf("Erro: Valor invalido\n"); 
               i = 6;
            }

        }
        printf("Os numeros pares digitados foram: %d %d %d %d %d %d"
       ,num[0],num[1],num[2],num[3],num[4],num[5]);

}