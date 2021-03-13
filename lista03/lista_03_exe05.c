#include <stdio.h>
#include <math.h>

int main()
{
    float peso, altura, imc;

    printf("digite o peso do individuo: ");
    scanf("%f",&peso);

    printf("digite a altura do individuo: ");
    scanf("%f",&altura);

    imc = peso/(pow(altura,2));

    if (imc < 18.5)
    {
        printf("Magreza");
    }else if (29,9 >= imc >= 18,5)
    {
        printf("Saudavel");
    }else if (29,9 >= imc >=25)
    {
        printf("Sobrepeso");
    }else if (34,9 >= imc>=30)
    {
        printf("Obesidade Grau 1");
    }else if (39,9 >= imc >= 35)
    {
        printf("Obesidade Grau 2 (severa)");
    }else if (imc >= 40)
    {
        printf("Obesidade Grau 3 (morbida)");
    }
    
}