#include <stdio.h>
#include <stdlib.h>

int main(){
    int val[5] = {2,4,5,8,10};
    unsigned int inicial;
    int *x;
    
    printf("Digite o numero para efetuar a troca: ");
    scanf("%d", x);

    val[2] = x;



    for(int i = 0; i < 5; i++){
        printf("%d, ", val[i]);

    }

}