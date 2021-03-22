#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("<< 5 valores>>>\n");

    float soma = 0, maior = 1, menor = 1, media;
    int num[5];


        for(int i = 0; i < 5; i++){
        printf("Entre com o numero %d: ",i+1);
        scanf("%d", &num[i]);
           
            
            if(maior <= num[i]){
                maior = num[i];
            }if(menor >= num[i]){
                menor = num[i];
            }
        soma = soma + num[i];
        media = (soma/5);


        }
        printf("Os numeros digitados sao: %d %d %d %d %d\n"
       ,num[0],num[1],num[2],num[3],num[4]);

       printf("O maior valor e: %d\n", maior);
       printf("O menor valor e: %d\n", menor);
       printf("A media e: %.1f\n", media);

}