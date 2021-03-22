#include <stdio.h>
#include <stdlib.h>

int main(){
    int a[3];
    int b[3];
    int c[3];

    printf("<< Subtração de vetores >>\n");

    for(int i = 0; i < 3; i++){
        printf("Digite o valor %d de A: ", i+1);
        scanf("%d", &a[i]);
        if(i >= 2){
            for(int j = 0; j < 3; j++){
                printf("Digite o valor %d de B: ", j+1);
                scanf("%d", &b[j]);
            }
        }
    }
    for(int i = 0; i < 3; i++){
        c[i] = a[i] - b[i];
    }
    printf("O vetor C, definido como C = A-B e (%d, %d, %d)", c[0],c[1],c[2]);

}