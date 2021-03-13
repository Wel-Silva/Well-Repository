#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
    int valor;
    printf("Digite um valor: \n");
    scanf("%d", &valor);

   

    for(int i = valor; i <= 0; i++){
        if(i==valor) printf("<< Contagem regressiva >>\n");
        printf("%d.. ", i);  
    } 
    printf("FIM!");

}