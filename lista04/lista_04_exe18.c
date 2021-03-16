#include <stdio.h>
#include <stdlib.h>

int main (){
    
    char resposta;
    int x;
    double calc;

    do{
        setbuf(stdin, NULL);
    printf("\n<< Conversor >>");
    printf("\nDigite uma opcao ");
    printf("\n1 - para converter de km/h para m/s");
    printf("\n2 - para converter de m/s para km/h");
    printf("\nq - para sair\n");
    scanf("%c", &resposta);
    
    switch (resposta)
    {
    case '1':
        printf("Digite a velocidade (km/h): ");
        scanf("%d", &x);
        calc = x / 3.6;
        printf("A velocidade em m/s e %lf", calc);
        break;
    case '2':
        printf("Digite a velocidade (m/s): ");
        scanf("%d", &x);
        calc = x * 3.6;
        printf("A velocidade em m/s e %.f", calc);
        break;
    default:
        break;
    }
    }while (resposta != 'q');

}