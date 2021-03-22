#include <stdlib.h>
#include <stdio.h>

int main(){
    int v[5];
    int v1[5];
    int v2[5];
    int j = 0, l = 0, i;

    for(i = 0; i < 5;i++){
        printf("Digite o valor %d: ", i+1);
        scanf("%d", &v[i]);
       
        if(v[i]%2 == 0){
            v2[l] = v[i];
            l++;
        } 
        else if(v[i]%3 == 0){
            v1[j] = v[i];
            j++;
        } 
    }
   for(int i = 0; i < 5; i++){
       if(v1[i] != 0){

       }
   }
    printf("Impares: ");{
        for(int i = 0; i < j; i++){
            printf("%d ", v1[i]);
        }
    }
    printf("\n\n");
    printf("Pares: ");{
        for(int i = 0; i < l; i++){
            printf("%d, ", v2[i]);
        }
    }

}