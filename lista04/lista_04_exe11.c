#include <stdio.h>
#include <stdlib.h>

int main(){

    int num, soma, i;
    printf("Quantos numeros deseja somar ? ");
    scanf("%d", &num);
    soma = 0;
    i = 0;

    do{
        i++;
        soma = soma + i;
    }while(i < num);

    printf("A soma dos %d primeiros numeros naturais e %d",num , soma);

}