#include <stdio.h>
#include <math.h>

int main()
{
    double ladoA, ladoB, ladoC;
    printf("insira os valores dos lados do triangulo : ");
    scanf("%lf", &ladoA);
    scanf("%lf", &ladoB);
    scanf("%lf", &ladoC);

    double a, b, c;
    a = pow(ladoA, 2);
    b = pow(ladoB, 2);
    c = pow(ladoC, 2);

    
    if (ladoA > ladoB + ladoC || ladoB > ladoA + ladoC || ladoC > ladoA + ladoB)
    {
        printf("Nenhum triagulo foi formado");
    }
    else if (a == b + c || b == c + a || c == b+a)
    {
        printf("Triangulo rentangulo");
    }
    else if (a > b + c || b > c + a || c > a +b)
    {
        printf("Triangulo obtusangulo");
    }
    else
    {
        printf("Retangulo acutangulo");
    }
}