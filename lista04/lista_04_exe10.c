#include <stdio.h>
#include <stdlib.h>

int main(){

    int num, soma, i;
    printf("Quantos numeros deseja somar ? ");
    scanf("%d", &num);
    soma = 0;
    i = 0;
    

    while(i < num){
        i ++;
        soma = soma + i;
        
    }
    printf("A soma dos %d primeiros numeros naturais e %d",num , soma);

}