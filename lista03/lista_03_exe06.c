#include <math.h>
#include <stdio.h>

int main()
{
    float num, result;
    printf("Digite um numero para verificar se ele e um numero inteiro e um quadrado perfeito: \n");
    scanf("%f", &num);


    result = sqrt(num);
    
    if ((result - (int)result) == 0) printf("numero possui raiz inteira %.0f", result);
    else printf("o numero nao possui raiz inteira");
}