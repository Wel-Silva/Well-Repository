#include <stdio.h>
#include <stdlib.h>

int main(){
int num = 10;

for(int i = 10; i >= 0; i--){
    if(i == 10){
        printf("<< Contagem regressiva >>\n");
    }
        printf("%d.. ", i);
}
printf("FIM!");

}