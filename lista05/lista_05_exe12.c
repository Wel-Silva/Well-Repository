#include <stdlib.h>
#include <stdio.h>

int main(){
    int verde, azul, amarela, vermelha;
    float pv, paz, pam, pve;

    printf("<< Probabilidades >>\n");

    printf("Digite a quantidade de bolinhas\n");
    
    printf("Verde: ");
    scanf("%d", &verde);

    printf("Azul: ");
    scanf("%d", &azul);

    printf("Amarela: ");
    scanf("%d", &amarela);

    printf("Vermelha: ");
    scanf("%d", &vermelha);

    pv = (verde * 100)/261.0;
    paz = (azul * 100)/261.0;
    pam = (amarela * 100)/261.0;
    pve = (vermelha * 100)/261.0;

    
    printf("\nProbabilidades");
    printf("\nVerde: %.1f%%", pv);
    printf("\nAzul: %.1f%%", paz);
    printf("\nAmarelo: %.1f%%", pam);
    printf("\nVermelha: %.1f%%", pve);
    

}