#include <stdio.h>
#include <math.h>

int main()
{
    double a, b,c, x, delta, raiz1, raiz2;

    printf("Digite as raizes da equacao: a :");
    scanf("%lf",&a);
    printf("b : ");
    scanf("%lf",&b);
    printf("c : ");
    scanf("%lf",&c);
    delta = pow(b,2) - (4 * a * c);
    if (delta > 0)
    {
        raiz1 = x = -b - sqrt(delta)/(2*a);
        raiz2 = x = -b + sqrt(delta)/(2*a);
        printf("Raizes da equacao sao:  %.2f e %.2f",raiz1,raiz2);
    }
    if (delta < 0)
    {   delta = delta * (-1);
        raiz1 = x = -b - sqrt(delta)/(2*a);
        raiz2 = x = -b + sqrt(delta)/(2*a);
        printf("Raizes da equacao sao:  %.2f e %.2f",raiz1,raiz2);
    }
    
}