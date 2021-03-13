#include <stdio.h>

int main(){
    int c;

    printf("Digite a temperatura (em celsius)");
    scanf("%d", &c);

    double f = c * (9.0/5.0) + 32.0;

    printf("%d graus Celsius correspondem a %.0f Fahrenheit", c, f);

}