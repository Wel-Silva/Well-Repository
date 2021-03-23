#include <stdlib.h>
#include <stdio.h>

int main(){

    int num[5];
    printf("<< Zerando negativos >>\n");
    for(int i = 0; i < 5; i++){
        printf("Entre com o numero %d: ", i+1);
        scanf("%d", &num[i]);

        if(num[i] <= 0){
            num[i] = 0;
        }

    }
    printf("\nZerando os negativos, obtem-se: ");
    for(int i = 0; i < 5; i++){
        printf("%d ",num[i]);
    }

}