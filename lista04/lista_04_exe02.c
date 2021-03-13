#include <stdio.h>
#include <stdlib.h>

int main(){
    int valor = 10;

    do {
         if (valor == 10){
            printf("<< Contagem regressiva >>\n");
        }
        printf("%d.. ",valor);
        valor--;
    }while(valor >= 0);
        printf("FIM!");

return 1;
}