#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
    int valor, x;
    printf("Digite um valor: \n");
    scanf("%d", &valor);

    x = valor;

    while(valor > 0){
        if(valor==x) printf("<< Contagem regressiva >>\n");
        printf("%d.. ", valor);  
        valor--;
        }
    printf("FIM!");

}