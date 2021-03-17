#include <stdlib.h>
#include <stdio.h>

int main(){
    int fat, n = 1;
    printf("<< Fatorial >>\n");
    
   
    for(fat = 1; n <= 15; n = n + 1){
    fat = fat * n;

        if(n > 10)printf("%d! = %d\n",n, fat);
        // OBS OBS OBS
    }

}