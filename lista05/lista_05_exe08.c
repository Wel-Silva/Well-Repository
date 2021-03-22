#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int valores[5];
    float media, soma, dp, sigma, v;

    dp = 0, media = 0, soma = 0, sigma = 0, v = 0;
    

    printf("<< Media e desvio-padrao >>\n");

    for(int i = 0; i < 5; i++){
        printf("Digite o valor %d: ", i+1);
        scanf("%d", &valores[i]);
        soma = soma + valores[i];
    }
    media = soma/5.0;

      for (int i = 0; i < 5; i++) {
        float v = valores[i] - media;
        dp += v * v;
    }

    sigma = sqrt(dp / 5);

    printf("A media e %.f e o desvio-padrao e %f",media, sigma);

}