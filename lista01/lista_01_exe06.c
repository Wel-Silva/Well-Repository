#include <stdio.h>
#include <stdlib.h>

int main(){

double primeiro, segundo, terceiro, premio;

primeiro = 780000*0.46;
segundo = 780000* 0.32;
terceiro =  780000 - (primeiro + segundo);

printf("\nValor total do premio: 780000\nPrimeiro vencedor: %.0f \nSegundo vencedor: %.0f \nTerceiro vencedor: %.0f \n ", primeiro, segundo, terceiro);


}