#include <stdio.h>
// verifica se o numero e primo 

int main(){

    int x, i, cont;

    do { 
    printf ("Digite um numero: ");
    scanf("%d", &x);
    }while (x < 0);
    
    for (i = 2; i <= x / 2; i++) {
    if (x % i == 0) {
       cont++;
       
    }
 }
 
 if (cont == 0)
    printf("O numero %d e primo\n", x);
 else
    printf("O numero %d nao e primo\n", x);
 
 return 0;
}

