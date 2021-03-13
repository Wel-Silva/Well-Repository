#include <stdio.h>
#include <stdlib.h>

int main(){

double salario_bruto, salario_liquido;
double diaria = 30;
double imposto_renda, ISS;
int qtd_dias;

printf("Digite a quantidade de dias trabalhados:\n");
scanf("%d", &qtd_dias);

printf("quantidade de dias ", qtd_dias);

salario_bruto = qtd_dias * diaria;
ISS = salario_bruto * 0.04;
imposto_renda = (salario_bruto - ISS) * 0.08;
salario_liquido = salario_bruto - ISS - imposto_renda;

printf("\nValor bruto R$: %.0f\nValor liquido R$: %.2f\nISS R$: %.0f\nIR R$: %.2f\n ", salario_bruto, salario_liquido, ISS, imposto_renda);

}