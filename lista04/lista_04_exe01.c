#include <stdio.h>
#include <stdlib.h>

int main(){
    int valor = 10;

     while(valor >= 0){
         if (valor == 10){
            printf("<< Contagem regressiva >>\n");
        }
        printf("%d.. ", valor);
        valor = valor - 1;
    }   
        printf("FIM!");

return 1;
}