#include <stdlib.h>
#include <stdio.h>


int main(){
    int i, x, numeros[8];
    int r = 0;
    
    printf("<< Valores iguais >>\n");

    for(i = 0; i < 8; i++){
        printf("Entre com o numero %d: ", i+1);
        scanf("%d", &numeros[i]);
    }
      for(i = 0; i < 8; i++){
        for(x =i+1; x < 8; x++){
            if(numeros[i] == numeros[x]){
                printf("%d ", numeros[i]);
            }
        }
    }
        
}



