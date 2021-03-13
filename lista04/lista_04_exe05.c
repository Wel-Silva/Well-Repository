#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
    int valor, x;
    printf("Digite um valor: \n");
    scanf("%d", &valor);

    x = valor;

    do{
        if(valor==x) printf("<< Contagem regressiva >>\n");
        printf("%d.. ", valor);  
        valor--;
        }while(valor > 0);
    printf("FIM!");

}