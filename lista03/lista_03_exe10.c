#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b, result, not, xor;

printf("== Operadores Booleanos ==");


printf("\nEntre com o primeiro valor (A): \n");
scanf("%d", &a);

printf("Entre com o primeiro valor (B): \n");
scanf("%d", &b);

if(a == 0 || b == 0){
    result = 0; 
    
}
else {
    printf("A and B: VERDADEIRO\n");
    printf("A or B: VERDADEIRO\n");
    result = 1;
}
if (result == 1){ 
    not = 0;
    printf("A and B: FALSO\n");
}
if (result == 1 && not == 0){
    xor = 0;
    printf("A and B: FALSO");
}

}