#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

int num1, num2, num3, num4, soma, bit1, bit2, bit3, bit4;


printf("== conversor de binarios ==");

    printf("\ndigite o 1o. bit: ");
    scanf("%d", &num1);
    printf("digite o 2o. bit: ");
    scanf("%d", &num2);
    printf("digite o 3o. bit: ");
    scanf("%d", &num3);
    printf("digite o 4o. bit: ");
    scanf("%d", &num4);

    bit1=num4*pow(2,0);  
    bit2=num3*pow(2,1); 
    bit3=num2*pow(2,2);
    bit4=num1*pow(2,3); 
    soma = (bit1 + bit2 + bit3 + bit4);
    printf("O numero binario %d%d%d%d corresponde ao numero decimal %d",num1,num2,num3,num4,soma);
    
}