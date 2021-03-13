#include <stdio.h>
#include <stdlib.h>

int main(){
    float venda, comissao, temp;

    printf("Digite o valor da venda: \n");
    scanf("%f", &venda);

    if (venda >= 100000){
        temp = venda * 0.16;
        comissao = temp + 700;
        printf("A comissao a ser paga e de R$ %.2f", comissao);
    }else if (venda < 100000 && venda > 80000 ){
        temp = venda * 0.14;
        comissao = temp + 650;
        printf("A comissao a ser paga e de R$ %.2f", comissao);
    }else if (venda < 800000 && venda > 60000 ){
        temp = venda * 0.14;
        comissao = temp + 600;
        printf("A comissao a ser paga e de R$ %.2f", comissao);
    }else if (venda < 600000 && venda > 40000 ){
        temp = venda * 0.14;
        comissao = temp + 550;
        printf("A comissao a ser paga e de R$ %.2f", comissao);
    }else if (venda < 40000 && venda > 20000 ){
        temp = venda * 0.14;
        comissao = temp + 500;
        printf("A comissao a ser paga e de R$ %.2f", comissao);
    }else if (venda < 20000){
        temp = venda * 0.14;
        comissao = temp + 400;
        printf("A comissao a ser paga e de R$ %.2f", comissao);
    }


}