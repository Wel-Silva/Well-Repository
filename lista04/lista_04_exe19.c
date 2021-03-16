#include <stdio.h>
#include <stdlib.h>

int main (){
    float i = 0;
    double saldo_jose = 50000, jose_poupa = 800;
    double saldo_carlos = 25000, carlos_poupa = 3000;

    while(saldo_carlos <= saldo_jose){
        i++;    

        saldo_jose = saldo_jose + jose_poupa;
        saldo_carlos = saldo_carlos + carlos_poupa;

        printf("\nO saldo do Jose no mes %.f e de %.2f",i, saldo_jose );
        printf("\nO saldo do Carlos no mes %.f e de %.2f",i, saldo_carlos );

        
    }

        i = i/12;
        printf("\nEm %.f ano(s) o Carlos tera mais dinheiro que jose", i);

}