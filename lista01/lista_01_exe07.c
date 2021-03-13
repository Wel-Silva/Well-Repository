#include <stdio.h>
#include <stdlib.h>

int main(){

int salario_bruto, salario_liquido;
int diaria = 30;
int qtd_dias, imposto_renda, ISS;

printf("Digite a quantidade de dias trabalhados:\n");
scanf("%d", &qtd_dias);

salario_bruto = qtd_dias * diaria;
imposto_renda = salario_bruto * 0.08;
ISS = salario_bruto * 0.04;
salario_liquido = salario_bruto - ISS - imposto_renda;

printf("\n Valor bruto R$: %d\nValor liquido R$: %d\nISS R$: %d\nIR R$: %d\n ", salario_bruto, salario_liquido, ISS, imposto_renda);

}