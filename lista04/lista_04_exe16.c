#include <stdio.h>
#include <math.h>

int main(){

    double posicao_memoria;
    int bits = 2;

    while (bits <= 128)
    {
        posicao_memoria = pow(2, bits);
        printf("\nCom %d bits e possivel enderecar %.f posicoes de memoria", bits, posicao_memoria);
        bits = bits * 2;
    }

}