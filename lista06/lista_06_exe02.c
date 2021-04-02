 #include <stdio.h>
 #include <stdlib.h>
 #include <conio.h>
 
 int main(){
     char nome[50];//Cria uma variavel char com 50 posições
     char c;// inicia uma variavel char
     int pos = 0;//inicina uma variavel para alocar uma posição dentro do array

    printf("<< Vetor de char>>\n");//cabeçario do programa
    printf("Digite um nome: ");//pede um nome
     c = getchar();//armazena a string dentro do getchar

     while (c != '\n')
     {
        nome[pos] = c;
        pos ++;
        c = getchar();
     }
     printf("O nome digitado e: ");
     for (int i = 0; i < pos; i++){
         printf("%c", nome[i]);
     }
     


 }