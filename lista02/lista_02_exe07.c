#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b, result, not, xor;

printf("== Operadores Booleanos ==");


printf("\nEntre com o primeiro valor (A): \n");
scanf("%d", &a);

printf("Entre com o primeiro valor (B): \n");
scanf("%d", &b);

if(a == 0 || b == 0) 
    result = 0; 
else result = 1;
if (result == 1) not = 0;
if (result == 1 && not == 0)xor = 0;




printf("A and B: %d\n", result);
printf("A or B: %d\n", result);
printf("A xor B: %d\n", xor);
printf("A not B: %d\n", not);
}