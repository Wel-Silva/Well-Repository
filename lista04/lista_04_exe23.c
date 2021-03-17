#include <stdlib.h>
#include <stdio.h>

int main(){
    int n, j;
    float x, y = 1.0;

    printf("<< Numero neperiano >>\n");
    printf("Entre com o numero de termos: ");
    scanf("%d", &n);

    
    for(int i = 1; i <= n; i++){
        x = 1;
        for(int j = 1; j <= i; j++){
            x = x * j;
        }
        y = y + 1.0/x;
    }
    printf("e ~ %f", y);
    // OBS OBS OBS
    
}
    

