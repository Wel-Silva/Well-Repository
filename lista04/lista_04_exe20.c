#include <stdlib.h>
#include <stdio.h>

int main(){
    
    int n, x = 0;

    printf("Digite o numero de linhas que serao impressas 'Triangulo de Floyd'");
    scanf("%d", &n);



    for(int i = 0; i <= n; i++){
        for(int j = 1; j <= i; j++){
            x++;
            printf("%d ", x);
            
        }
        printf("\n");
    }
    return 0;
}