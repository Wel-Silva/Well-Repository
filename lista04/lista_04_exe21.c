#include <stdlib.h>
#include <stdio.h>

int main(){
    int fat, n = 1;
    printf("<< Fatorial >>\n");
    
   
    for(fat = 1; n <= 10; n = n + 1){
    fat = fat * n;
    printf("%d! = %d\n",n, fat);
}

}