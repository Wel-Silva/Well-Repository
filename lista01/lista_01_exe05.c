#include <stdio.h>
#include <stdlib.h>

int main(){

double salario = 4000;
double aumento, salario_final;

aumento =salario*0.25;
//printf("\n %.2f \n",aumento);
salario_final = salario + aumento;

printf("\nApos 25%% de aumento o salario fica %.2f R$", salario_final);

}