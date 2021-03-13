#include <stdio.h>
#include <stdlib.h>

int main(){
    int num;
    printf("Digite um numero: \n");
    scanf("%d", &num);

    printf("\nO numero sucessor de %d e %d\n", num, (num+1));
    printf("O numero antecessor de %d e %d", num, (num-1));

}