 #include <stdio.h>
 #include <stdlib.h>
 
 int main(){
     int cont = 1;
     int vet[126];

     for (int i = 32; i <= 126; i++){
         
         printf("%d %c\t",i, vet[i]);
         if(cont == 7){
             printf("\n");
             cont = 1;
         }
         
        cont ++;
     }

 }