 #include <stdio.h>
 #include <stdlib.h>
 
 int main(){
    
    char nome[50];
    char nome2[50];
    char n,n2;
    int pos = 0;
    int contador = 0;

    printf("Digite o nome 1: ");
    n = getchar();

    while(n != '\n'){
        nome[pos] = n;
        pos ++;
        n = getchar();
    }

    printf("Digite o nome 2: ");
    n2 = getchar();

     while(n2 != '\n'){
        nome2[pos] = n2;
        pos ++;
        n2 = getchar();
    }
    for(int i = 0; i < pos; i++){
        printf("%c", nome[i]);
    }
    for(int i = 0; i < pos; i++){
        printf("%c", nome2[i]);
    }
    for(int i = 0; i < pos;i++){
        if(nome[i] == nome2){
            contador++;
        }else if (nome[i] != nome2[i]){
            printf("Nomes sao diferentes");
            break;
        }    

    }
    if (contador == pos){
        printf("Nomes sao iguais");
    }


 }