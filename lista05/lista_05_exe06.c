#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("<< 5 valores>>>\n");

    float soma = 0, maior = 1, menor = 1,pmaior,pmenor;
    int num[5];
    float media;


        for(int i = 0; i < 5; i++){
        printf("Entre com o numero %d: ",i+1);
        scanf("%d", &num[i]);
           
            
            if(maior <= num[i]){
                maior = num[i];
                pmaior = i;
            }if(menor >= num[i]){
                menor = num[i];
                pmenor = i;
            }
        soma = soma + num[i];
        media = (soma/5);


        }
        printf("Os numeros digitados sao: %d %d %d %d %d\n"
       ,num[0],num[1],num[2],num[3],num[4]);

       printf("O maior valor e: %.f, localizado na posicao %.f do vetor\n", maior, pmaior);
       printf("O menor valor e: %.f, localizado na posicao %.f do vetor\n", menor, pmenor);
       printf("A media e: %.1f\n", media);

}