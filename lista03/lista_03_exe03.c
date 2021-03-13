#include <stdio.h>
#include <stdlib.h>

double impostoMg(), impostoSp(), impostoRj(),impostoMs();

int main(){
    float valorInicial;
    int dgFd;

printf("<<calculo de imposto>>");
printf("\n Digite o valor do produto R$: ");
scanf("%f", &valorInicial);

printf("digite a unidade da federacao: ");
scanf("%d", &dgFd);

if (dgFd == 1)
    {
        double valorFinal1;
        valorFinal1 = impostoMg(valorInicial);
        printf("valor final com impostos: R$ %.2f",valorFinal1);
    }
if (dgFd == 2)
    {
        double valorFinal2;
        valorFinal2 = impostoSp(valorInicial);
        printf("valor final com impostos: R$ %.2f",valorFinal2);
    }
if (dgFd == 3)
    {
        double valorFinal3;
        valorFinal3 = impostoRj(valorInicial);
        printf("valor final com impostos: R$ %.2f",valorFinal3);
    }
if (dgFd == 4)
    {
        double valorFinal4;
        valorFinal4 = impostoMs(valorInicial);
        printf("valor final com impostos: R$ %.2f",valorFinal4);
    }
}

double impostoMg(double valorIncial)
{
    valorIncial = (valorIncial * 0.07) + valorIncial;
    return valorIncial;
}
double impostoSp(double valorIncial)
{
    valorIncial = (valorIncial * 0.12) + valorIncial;
    return valorIncial;
}
double impostoRj(double valorIncial)
{
    valorIncial = (valorIncial * 0.15) + valorIncial;
    return valorIncial;
}
double impostoMs(double valorIncial)
{
    valorIncial = (valorIncial * 0.08) + valorIncial;
    return valorIncial;
}



