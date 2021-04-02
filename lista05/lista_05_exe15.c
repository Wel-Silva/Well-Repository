#include <stdlib.h>
#include <stdio.h>


int main(){
    int i, x, numeros[8];
    int r = 0, repete;
    
    printf("<< Valores iguais >>\n");

    for(i = 0; i < 8; i++){
        printf("Entre com o numero %d: ", i+1);
        scanf("%d", &numeros[i]);
    }


    printf("Valores repetidos: ");
    for(i = 0; i < 8; i++){
        repete = 0;
        for(x = 0; x < 8; x++){
            if(numeros[i] == numeros[x]){
                if(x < i){
                    break;
                }
                repete++;
            }
        }
        if(repete > 1) printf("%d ", numeros[i]);

    }
        
}



