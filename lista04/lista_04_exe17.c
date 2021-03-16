#include <stdio.h>
#include <math.h>

int main(){
    
    char letra_certa = 'c', resposta;
    setbuf(stdin, NULL);

    printf("<<Forca de uma letra so>>");
    


    for(int i = 5; i > 0; i--){
    setbuf(stdin, NULL);
    printf("\nQual a letra? ");
    scanf("%c", &resposta);  

        if(resposta != letra_certa){
            if(i > 2)  printf("Errado! Voce tem mais %d chances", i-1);
            else if(i == 2) printf("Ultima chance!!!");
            else if(i == 1) printf("Acabaram suas chances. A letra correta e '%c'", letra_certa);
        }else if(resposta == letra_certa){
            printf("ACERTOU!");
            i = 0;
        }

    }

}