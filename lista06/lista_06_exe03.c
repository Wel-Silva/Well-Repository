 #include <stdio.h>
 #include <stdlib.h>
 
 int main(){
     char nome[50];
     int maiusculo[50];
     char c;
     int pos;
     pos = 0;
    printf("<< Vetor de char>>\n");
    printf("Digite oum nome: ");
     c = getchar();

     while (c != '\n')
     {
        nome[pos] = c;
        pos ++;
        c = getchar();
     }
     printf("O nome digitado e: ");
     for (int i = 0; i < pos; i++){
         maiusculo[i] = nome[i] - 32;
         printf("%c", maiusculo[i]);
     }
     


 }