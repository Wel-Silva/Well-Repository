#include <stdio.h>
#include <stdlib.h>

int main(){
    
    float c,f;
    char resp ;

    printf("<<conversor de temperaturas>>");
    printf("\ndigite a temperatura:");
    scanf("%f", &c);

    printf("digite a unidade:");
    setbuf(stdin, NULL);
    scanf("%c", &resp);

    f = c;

    if (resp == 'c'){
        f = 0;
        f = c * (9.0 / 5.0) + 32.0;
        printf("\ntemperatura de %.0f Celsius em Fahreneit eh: %.0f", c, f);
    }
    
    if (resp == 'f'){
        c = (f - 32) / 1.8;
        printf("\ntemperatura de %.0f Fahreneit em Celsius eh: %.0f", f, c);
    }
}